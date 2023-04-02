#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void croceromana(FILE* f, unsigned char n) {

	size_t r, c;
	for(r = 0; r < n*3 +1; r++) {
		if (r < n || r >n)
			for (c = 0; c < n*2 + 2; c++) {
				if (c < n * 2)
					fputc(' ', f);
				else if (c == n * 2)
					fputc('|', f);
				else
					fputc('\n', f);
			}
		else if (r == n) {
			for (c = 0; c < n * 4 + 2; c++) {
				if (c < n * 2)
					fputc('-', f);
				else if (c == n * 2)
					fputc('+', f);
				else if (c > n * 2 && c < n * 4 + 1)
					fputc('-', f);
				else
					fputc('\n', f);
			}
		}	
	}
}