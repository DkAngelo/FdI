#include <stdlib.h>
#include <string.h>

char* decodifica_morse(const char* codice) {

	char* v[] = { "._", "_...", "_._.", "_..",
		".", ".._.", "__.", "....",
		"..", ".___", "_._", "._..",
		"__", "_.", "___", ".__.",
		"__._", "._.", "...",
		"_", ".._", "..._",
		".__", "_.._", "_.__","__.." };

	size_t len = strlen(codice);
	size_t i, j, k = 0;
	char* x = "";
	char* y = "";
	for (i = 0; i < len; i++) {
		if (codice[i] != ' ' && codice[i] != '/') {
			*x = realloc(x, x + 1);
			x[i] = codice[i];
		}
		/*if (codice[i] == ' ') {
			for (j = 0; j < 26; j++) {
				if(strcmp(x, v[j])==0){
					y[k] = j - 'A';
					k++;
					y = calloc(sizeof(y)+1, 1);
				}
			}
		}
		if (codice[i] == '/') {
			y[k] = ' ';
			k++;
			y = calloc(y, (k + 1) * sizeof(char));
		}
	}
	free(x);
	free(v);
	return y;*/
	}
}

int main(void) {

	char m[] = "_._. .. ._ ___ / __ ._ __ __ ._";
	decodifica_morse(m);

}