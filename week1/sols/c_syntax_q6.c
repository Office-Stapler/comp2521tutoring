#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char ch = getchar();
    while (ch != EOF) {
        putchar(ch);
        ch = getchar();
    }
}

bool isSorted(int *a, int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}