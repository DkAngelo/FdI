#include "matrix.h"

void mat_normalize_rows(struct matrix* m) {

	if (m == NULL)
		return;

	size_t r, c;
	double n;

	for (r = 0; r < m->rows; r++) {
		for (c = 0, n = 0; c < m->cols; c++) {
			n += m->data[r * m->cols + c] * m->data[r * m->cols + c];
		}
		if (n == 0)
			continue;
		n = sqrt(n);
		for (c = 0; c < m->cols; c++) {
			m->data[r * m->cols + c] /= n;
		}
	}
}