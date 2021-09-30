#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isPalindrome(char*);


int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Please enter a word\n");
        exit(EXIT_FAILURE);
    }
    
    printf("%s is %s palindrome\n", argv[1], isPalindrome(argv[1]) ? "a" : "not a");
    
}


bool isPalindrome(char* string) {
    return true;
}
