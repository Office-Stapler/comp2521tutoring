#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int computeInefficient(int x, int array[], int size);
int computeEfficient(int x, int array[], int size);

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Proper syntax is './function xvalue array_values...'");
        exit(EXIT_FAILURE);
    }
    int x = atoi(argv[1]);
    // ./function xvalue must be removed, so size is just 2 less than argc.
    int size = argc - 2;
    int *array = malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        array[i] = atoi(argv[i + 2]);
    }
    int val2 = computeInefficient(x, array, size);
    int val1 = computeEfficient(x, array, size);
    // 1 2 3 4 5, n = 4
    // x = 2
    // 2^4 * 5 + 2^3 * 4 + 2^2 * 3 + 2^1 * 2 + 1
    printf("%d %d\n", val1, val2);
}


int computeInefficient(int x, int array[], int size) {
    int res = 0;
    for (int i = 0; i < size; ++i) {
        int power = pow(x, size - i - 1);
        res += array[size - i - 1] * power;
    }
    return res;
}

int computeEfficient(int x, int array[], int size) {
    int res = array[0];
    int power = x;
    for (int i = 1; i < size; ++i) {
        res += array[i] * power;
        power *= x;
    }
    return res;
}


