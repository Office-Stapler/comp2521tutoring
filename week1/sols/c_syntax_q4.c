#include <stdio.h>
#include <ctype.h>
int main(void) {
    char ch = getchar();
    char *type = isdigit(ch) ? "digit" : "non-digit";
    printf("'%c' is a %s\n", ch, type);
}