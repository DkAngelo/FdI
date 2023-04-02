#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

extern void stampa_tavola_pitagorica(FILE* f, unsigned int n);

int main(void) {

	FILE* f = fopen("test.txt", "w");

	stampa_tavola_pitagorica(f, 5);
	stampa_tavola_pitagorica("test1.txt", 10);
	stampa_tavola_pitagorica("test2.txt", 1);
	stampa_tavola_pitagorica("test3.txt", 0);

	return 0;
}