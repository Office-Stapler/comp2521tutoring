#include <stdio.h>
#include "sort.h"
#include "q5.h"

void doSort() {
    int a[] = {4, 3, 6, 8, 2};
    sort(a, 5);
    for (int i = 0; i < 5; ++i) printf("%d\n", a[i]);
}

int main(void) {
    doSort();
}