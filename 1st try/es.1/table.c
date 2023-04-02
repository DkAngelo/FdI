#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

void print_table(char** colnames, uint8_t ncols, uint8_t nrows) {

	if (nrows == 0 || ncols == 0)
		return;
	size_t rows = (nrows + 1) * 2;

	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < ncols; j++) {
			if (i == 0)
				printf("|%-9s", colnames[j]);
			else if (i % 2 != 0)
				printf("+---------");
			else
				printf("|         ");
		}
		if (i %2 == 0)
			printf("|\n");
		else
			printf("+\n");
	}
}