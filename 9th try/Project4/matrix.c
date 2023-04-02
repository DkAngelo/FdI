#include "matrix.h"

struct matrix* mat_pad(const struct matrix* mat) {
	
	if (mat->data == NULL)
		return NULL;

	struct matrix* res = malloc(sizeof(struct matrix));
	res->cols = mat->cols + (mat->cols - 1);
	res->rows = mat->rows + (mat->rows - 1);
	res->data = malloc(res->cols * res->rows * sizeof(double));

	size_t r, c, i, k;
	for (r = 0, i = 0; r < mat->rows; r++) {
			for (c = 0, k = 0; c < mat->rows; c++) {
					res->data[(r + i) * res->cols + (c + k)] = mat->data[r * mat->cols + c];
					k++;
					res->data[(r + i) * res->cols + (c + k)] = 0;
			}
		i++;
			for (c = 0, k = 0; c < mat->rows; c++) {
				res->data[(r + i) * res->cols + (c + k)] = 0;
				k++;
				res->data[(r + i) * res->cols + (c + k)] = 0;
			}
	}
	return res;
}