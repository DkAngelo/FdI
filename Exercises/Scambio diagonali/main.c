#include "matrix.h"

int main(void) {

	struct matrix* A = malloc(sizeof(struct matrix));

	A->rows = 3;
	A->cols = 3;
	A->data = malloc(A->rows * A->cols * sizeof(double));

	A->data[0 * A->cols + 0] = 1;
	A->data[0 * A->cols + 1] = 2;
	A->data[0 * A->cols + 2] = 3;
	A->data[1 * A->cols + 0] = 4;
	A->data[1 * A->cols + 1] = 5;
	A->data[1 * A->cols + 2] = 6;
	A->data[2 * A->cols + 0] = 7;
	A->data[2 * A->cols + 1] = 8;
	A->data[2 * A->cols + 2] = 9;

	struct matrix *B = scambia_diagonali(A);

	matprint(B);

	return 0;
}