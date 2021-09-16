#include <stdio.h>

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main(void) {
    int a[] = {1,2,3,4,5};
    swap(a, 0, 1);
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

