#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix_operations.h"


int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <matrix size>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        fprintf(stderr, "Invalid matrix size. Please provide a positive integer.\n");
        return 1;
    }

    double* A = (double*)malloc(n * n * sizeof(double));
    double* x = (double*)malloc(n * sizeof(double));
    double* y = (double*)malloc(n * sizeof(double));

    matrix_vector_multiply(A, x, n, y);

    free(A);
    free(x);
    free(y);

    return 0;
}
