#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* hangman(const char* frase, const char* lettere) {

	if (frase == NULL || lettere == NULL)
		return NULL;

	size_t len1 = strlen(frase);
	size_t len2 = strlen(lettere);
	char* str = calloc((len1 + 1) * sizeof(char), 1);

	size_t i, k;
	for (i = 0; i < len1; i++) {
		if (isalpha(frase[i]) != 0) {
			str[i] = '*';
			for (k = 0; k < len2; k++) {
				char c = frase[i];
				if (isupper(c))
					c = tolower(c);

				if (c == lettere[k]) {
					str[i] = frase[i];
					break;
				}
			}
		}
		else
			str[i] = frase[i];
	}
	return str;
}