#include "rectangle.h"

int find_largest(const struct rect* r, size_t n) {

	if (r == NULL || n == 0)
		return -1;

	int i;
	double max = 0;
	int a;
	for (i = 0; i < n; i++) {
		double diag = sqrt((r[i].a.x - r[i].b.x) * (r[i].a.x - r[i].b.x) + (r[i].a.y - r[i].b.y) * (r[i].a.y - r[i].b.y));
		if (max < diag) {
			max = diag;
			a = i;
		}
	}
	return a;
}