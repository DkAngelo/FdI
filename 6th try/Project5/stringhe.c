#include <string.h>
#include <stdlib.h>

char* rimuovimultipli(const char* str) {

	if (str == NULL)
		return NULL;
	if (str == "")
		return "";

	size_t len = strlen(str);
	size_t i, j=0;
	for (i = 0; i < len; i++) {
		if (str[i] == str[i + 1]) {
			j++;
		}
	}

	size_t len2 = len - j;
	char* res = calloc((len2+1) * sizeof(char), 1);
	for (i = 0, j = 0; i < len; i++) {
		if (str[i] != str[i + 1]) {
			res[j] = str[i];
			j++;
		}
	}
	return res;
}