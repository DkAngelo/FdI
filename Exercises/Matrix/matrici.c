#include <stdlib.h>
#include <stdio.h>

struct mat {
    size_t rows, cols;
    double* data;
};

struct mat* mat_create(size_t rows, size_t cols) {

    struct mat* A = malloc(sizeof(struct mat));
    A->rows = 3;
    A->cols = 2;
    A->data = malloc(A->rows * A->cols * sizeof(double));

}

void mat_print(struct mat* m) {

    for (size_t r = 0; r < m->rows; ++r) {

        for (size_t c = 0; c < m->cols; ++c) {
            printf("%f", m->data[r * m->cols + c]);
        }
        printf("\n");
    }

}
int main(void)
{
    struct mat* A = malloc(sizeof(struct mat));
    A = mat_create(3, 2);

    A->data[0 * A->cols + 0] = 1;
    A->data[0 * A->cols + 1] = 2;
    A->data[1 * A->cols + 0] = 3;
    A->data[1 * A->cols + 1] = 4;
    A->data[2 * A->cols + 1] = 5;
    A->data[2 * A->cols + 2] = 6;

    mat_print(A);

    free(A->data);
    return 0;
}