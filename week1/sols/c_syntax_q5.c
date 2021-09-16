#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch = getchar();
    while (ch != EOF) {
        putchar(ch);
        ch = getchar();
    }
}