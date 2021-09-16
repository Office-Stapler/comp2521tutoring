#include <stdio.h>

int main(void) {
    char ch = getchar();
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("vowel\n");
    } else {
        printf("consanant\n");
    }
}