#include <stdlib.h>
#include <stdio.h>

void plotter(const char* p) {

	size_t i, j;
	for (i = 0; p[i] != 0; i++) {
		if (p[i] < 0) {
			int x = abs(p[i]);
			for (j = 0; j < x; j++)
				fputc(p[i + 1], stdout);
			i++;
		}
		else if (p[i] > 0) {
			fputc(p[i], stdout);
		}
	}
}