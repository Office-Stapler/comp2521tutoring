#include <stdio.h>
#include "make2.h"

Vector makeVector(int x, int y) {
    Vector v = {
        .x = x,
        .y = y
    };
    return v;
}

void printVector(Vector v) {
    printf("Vector: (%d, %d)\n", v.x, v.y);
}