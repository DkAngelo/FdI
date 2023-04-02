#include "matrix.h"

void matprint(struct matrix* m) {

    for (size_t r = 0; r < m->rows; ++r) {

        for (size_t c = 0; c < m->cols; ++c) {
            printf("%f   ", m->data[r * m->cols + c]);
        }
        printf("\n");
    }

}