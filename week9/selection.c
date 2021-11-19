#include "sort.h"

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void sort(int a[], int size) {
    for (int i = 0; i < size; ++i) {
        int min = a[i];
        int minIndex = i;
        for (int j = i; j < size; ++j) {
            if (a[j] < min) {
                min = a[j];
                minIndex = j;
            }
        }
        swap(a, i, minIndex);
    }
}