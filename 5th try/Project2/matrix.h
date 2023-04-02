#if !defined MTRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix* mat_rendiquadrata(const struct matrix* a);

struct matrix {
    size_t rows, cols;
    double* data;
};

#endif //MATRIX_H