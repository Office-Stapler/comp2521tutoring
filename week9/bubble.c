#include <stdbool.h>
#include <stdio.h>
#include "sort.h"

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void sort(int a[], int size) {
    int compare = 0;
    while (1) {
        bool hasSwapped = false;
        for (int i = 0; i < size - 1; ++i) {
            compare++;
            if (a[i] > a[i + 1]) {
                swap(a, i, i + 1);
                hasSwapped = true;
            }
        }
        if (!hasSwapped) break;
    }
    printf("Comparisons: %d\n", compare);
}