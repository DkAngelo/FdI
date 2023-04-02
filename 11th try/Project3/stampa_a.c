#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdint.h>

void stampa_a(uint8_t n) {

	if (n % 2 == 0 || n < 3)
		return;

	size_t a = n - 1;
	for (size_t count = 0; count < n; count++) {
		for (size_t i = 0; i < a; i++){
			printf(" ");
		}
		a--;
		printf("/");
		size_t space = count * 2;
		if (count > 0 && count != (n/2)) {
			for (size_t s = 0; s < space; s++) {
				printf(" ");
			}
		}
		else if (count > 0 && count == (n / 2)) {
			for (size_t s = 0; s < space; s++) {
				printf("-");
			}
		}
		printf("\\\n");
	}
}