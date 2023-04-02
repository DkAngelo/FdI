#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>

char* codifica_morse(const char* testo) {
	if (testo == NULL)
		return NULL;

	char* malph[] = { "._","_...","_._.","_..",".",
		".._.","__.","....","..",".___",
		"_._","._..","__","_.","___",".__.",
		"__._","._.","...","_",".._","..._",
		".__","_.._","_.__","__.." };
	
	size_t len = strlen(testo);
	char str[255] = "";
	char res[255] = "";
	size_t i, j, l = 0;
	for (i = 0, j = 0; i < len; i++) {
		if (testo[i] == ' ') {
			j = 0;
			for (size_t k = 0; k < 26; k++) {
				if (strcmp(str, malph[k]) == 0) {
					res[l] = k + 'A';
					l++;
					*str = "";
					break;
				}
			}
			continue;
		}
		else if (testo[i] == '/') {
			res[l] = ' ';
			i++;
			l++;
			continue;
		}
		str[j] = testo[i];
		j++;
	}
	for (size_t k = 0; k < 26; k++) {
		if (strcmp(str, malph[k]) == 0) {
			res[l] = k + 'A';
		}
	}
	return res;
}

int main(void) {
	codifica_morse("_._. .. ._ ___ / __ ._ __ __ ._");
}