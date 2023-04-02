#define _CRT_SECURE_NO_WARNINGS

#include "tirocini.h"

bool tirocinio_load(FILE* f, struct tirocinio* t) {

	while (1) {
		long i;
		for (i = 0; ; i++) {
			int c = fgetc(f);
			if (c == ',') {
				t->nome = "";
				t->nome = calloc(1, (i + 1) * sizeof(char));
				fseek(f, -i - 1, SEEK_CUR);
				fread(t->nome, i * sizeof(char), 1, f);
				fseek(f, 1, SEEK_CUR);
				break;
			}
		}
		for (i = 0; ; i++) {
			int c = fgetc(f);
			if (c == ',') {
				t->azienda1 = "";
				t->azienda1 = calloc(1, (i + 1) * sizeof(char));
				fseek(f, -i - 1, SEEK_CUR);
				fread(t->azienda1, i * sizeof(char), 1, f);
				fseek(f, 1, SEEK_CUR);
				break;
			}
		}
		for (i = 0; ; i++) {
			int c = fgetc(f);
			if (c == ',') {
				t->azienda2 = "";
				t->azienda2 = calloc(1, (i + 1) * sizeof(char));
				fseek(f, -i - 1, SEEK_CUR);
				fread(t->azienda2, i * sizeof(char), 1, f);
				fseek(f, 1, SEEK_CUR);
				break;
			}
		}
		for (i = 0; ; i++) {
			int c = fgetc(f);
			if (c == '\n') {
				t->azienda3 = "";
				t->azienda3 = calloc(1, (i + 1) * sizeof(char));
				fseek(f, -i - 2, SEEK_CUR);
				fread(t->azienda3, i * sizeof(char), 1, f);
				fseek(f, 2, SEEK_CUR);
				break;
			}
		}
		int c = fgetc(f);
		if (c == EOF) {
			return true;
		}
		else if (isalpha(c)) {
			fseek(f, -1, SEEK_CUR);
			continue;
		}
		else{
			return false;
		}	
	}
}