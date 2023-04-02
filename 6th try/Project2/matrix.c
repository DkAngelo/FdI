#include "matrix.h"

void mat_swapcols(struct matrix* mat, size_t c1, size_t c2) {

	double* tmp1 = malloc(mat->N * sizeof(double));
	double* tmp2 = malloc(mat->N * sizeof(double));

	size_t i, r;
	for (r = 0, i = 0; r < mat->N; r++, i++) {
		tmp1[i] = mat->data[r * mat->M + c1];
	}
	for (r = 0, i = 0; r < mat->N; r++, i++) {
		tmp2[i] = mat->data[r * mat->M + c2];
	}
	for (r = 0, i = 0; r < mat->N; r++, i++) {
		mat->data[r * mat->N + c1] = tmp2[i];
		mat->data[r * mat->N + c2] = tmp1[i];
	}
	free(tmp1);
	free(tmp2);
}