#include "shapes.h"

bool line_load(FILE* f, struct line* pln) {

	if (f == NULL)
		return false;

	size_t i = 0;
	while (1) {
		int c = fgetc(f);
		if (c == EOF)
			break;
		switch (i) {
		case(0):
			pln->x1 = c;
		case(1):
			pln->x1 += (c << 8);
		case(2):
			pln->y1 = c;
		case(3):
			pln->y1 += (c << 8);
		case(4):
			pln->x2 = c;
		case(5):
			pln->x2 += (c << 8);
		case(6):
			pln->y2 = c;
		case(7):
			pln->y2 += (c << 8);
		case(8):
			pln->thickness = c;
		}
		if (i % 8 == 0)
			return true;
		i++;
	}
	if (i % 8 == 0)
		return true;
	else
		return false;
}