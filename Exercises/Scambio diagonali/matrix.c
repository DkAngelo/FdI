#include "matrix.h"

struct matrix* scambia_diagonali(const struct matrix* m) {

	if (m == NULL)					//controlli sulla matrice
		return NULL;
	if (m->cols != m->rows)
		return NULL;

	struct matrix* B = malloc(sizeof(struct matrix));			//creazione matrice
	B->rows = m->rows;
	B->cols = m->cols;
	B->data = malloc(B->rows * B->cols * sizeof(double));

	size_t i, j;
	size_t k = B->cols - 1;

	for (i = 0; i  < B->rows; i++){											//lettura e scambio
		for (j = 0; j < B->cols; j++) {
			if (i == j) {
				B->data[i * B->cols + j] = m->data[i * m->cols + k - j];
				B->data[i * B->cols + k - j] = m->data[i * m->cols + j];
				continue;
			}

			if (i == k - j)
				continue;

			B->data[i * B->cols + j] = m->data[i * m->cols + j];
		}
	}

	return B;
}