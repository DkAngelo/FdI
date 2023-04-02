#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>

char* codifica_morse(const char* testo) {

	if (testo == NULL) {
		return NULL;
	}
	char* ris = calloc(strlen(testo) * 5 + 1, 1);
	char* str[] = { "._","_...","_._.","_..",".",".._.","__.","....","..",".___","_._",
					"._..","__","_.","___",".__.","__._","._.","...","_",".._",
					"..._",".__","_.._","_.__","__.." };

	for (size_t i = 0; testo[i] != 0; ++i) {
		if (testo[i] == ' ') {
			strcat(ris, "/ ");
		}
		else {
			strcat(ris, str[testo[i] - 'A']);
		}
	}

	if (strlen(ris) > 0)
		ris[strlen(ris) - 1] = 0;

	return ris;
}