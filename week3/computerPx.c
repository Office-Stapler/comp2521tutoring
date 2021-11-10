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
        array[i] = atoi(argv[i+2]);
    }
    
    int val1 = computeEfficient(x, array, size);
    int val2 = computeInefficient(x, array, size);
    printf("%d %d\n", val1, val2);
}


int computeInefficient(int x, int array[], int size) {
    int res = 0;
    for (int i = size - 1; i >= 0; --i) {
        int power = pow(x,i);
        res += power * array[i];
    }
    return res;
}

int computeEfficient(int x, int array[], int size) {
    int res = 0;
    int factor = 1;
    for (int i = 0; i < size; ++i) {
        res += factor * array[i];
        factor *= x;
    }
    
    return res;
}


