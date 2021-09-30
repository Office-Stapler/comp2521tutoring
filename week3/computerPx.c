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
    for (int i = 2; i < argc; ++i) {
        array[i] = atoi(argv[i]);
    }
    
    int val1 = computeEfficient(x, array, size);
    int val2 = computeInefficient(x, array, size);
    printf("%d %d\n", val1, val2);
}


int computeInefficient(int x, int array[], int size) {
    int res = 0;
    
    return res;
}

int computeEfficient(int x, int array[], int size) {
    return 0;
}


