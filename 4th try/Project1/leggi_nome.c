#include "leggi_nome.h"

char* leggi_nome_sito(const char* url) {

	size_t len = strlen(url);
	size_t len2 = strlen(url)-7;
	char* ris = malloc(len2 * sizeof(char));
	ris[len2] = '\0';

	for (size_t i = 7, j = 0; i < len; i++, j++)
	{
		ris[j] = url[i];
	}
	return ris;
}