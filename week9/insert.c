#include "sort.h"
#include <stdio.h>

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void sort(int a[], int size) {
    for (int i = 1; i < size; ++i) {
        if (a[i] < a[i - 1]) {
            int shiftIndex = i;
            while (shiftIndex > 0 && (a[shiftIndex] < a[shiftIndex - 1])) {
                swap(a, shiftIndex, shiftIndex - 1);
                shiftIndex--;
            }
        }
    }
}