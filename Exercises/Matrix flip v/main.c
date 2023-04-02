#include "matrix.h"

int main(void) {

	struct matrix* m = malloc(sizeof(struct matrix));
	m->rows = 2;
	m->cols = 3;
	m->data = malloc(m->cols * m->rows * sizeof(double));
	m->data[0 * m->cols + 0] = 1;
	m->data[0 * m->cols + 1] = 2;
	m->data[0 * m->cols + 2] = 3;
	m->data[1 * m->cols + 0] = 4;
	m->data[1 * m->cols + 1] = 5;
	m->data[1 * m->cols + 2] = 6;
	/*m->data[2 * m->cols + 0] = 7;
	m->data[2 * m->cols + 1] = 8;
	m->data[2 * m->cols + 2] = 9;*/

	struct matrix* n = malloc(sizeof(struct matrix));
	n->rows = 3;
	n->cols = 3;
	n->data = NULL;

	struct matrix* d = matrix_flip_v(m);
	struct matrix* s = matrix_flip_v(n);
	free(m->data);
	free(m);
	free(n->data);
	free(n);

	return 0;
}