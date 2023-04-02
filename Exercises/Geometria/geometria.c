#include "geometria.h"

int colineari(struct punto p1, struct punto p2, struct punto p3)
{
	int a = p3.x - p2.x;
	int b = p1.y - p2.y;
	int c = p3.y - p2.x;
	int d = p1.x - p2.x;

	if ((a * b) == (c * d)) {
		return 1;
	}

	return 0;
}
