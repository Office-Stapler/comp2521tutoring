#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void o1(int a[], int size);
void on(int a[], int size);
void on2(int a[], int size);

int main(void) {
    int size;
    scanf("%d", &size);
    int* array = malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1;
    }
    o1(array, size);
    on(array, size);
    on2(array, size);
}

void o1(int a[], int size) {
    printf("Example of an O(1) Alogrithm: \n");
    for (int i = 0; i < 100; ++i) {
        printf("%d\n", i);
    }
    printf("%d\n", a[size - 1]);
}

void on(int a[], int size) {
    printf("Example of an O(n) Alogrithm: \n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

void on2(int a[], int size) {
    printf("Example of an O(n^2) Alogrithm: \n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("(%d %d) ", a[i], a[j]);
        }
        putchar('\n');
    }
}

void printCharacters(char* string) {
    for (int i = 0; i < strlen(string); ++i) {
        putchar(string[i]);
    }
}
