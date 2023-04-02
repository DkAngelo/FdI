#include <stdlib.h>
#include <string.h>

#include <stdlib.h>
#include <string.h>

extern char* trim(const char* s) {

	if (s == NULL)
		return NULL;

	size_t len = strlen(s);
	size_t num = len;
	size_t i, j;

	for (i = 0; i < len; i++) {
		if (s[i] != ' ') {
			num -= i;
			break;
		}
	}

	if (i == len)
		return calloc(1, 1);

	for (j = len - 1; j > i; j--) {
		if (s[j] != ' ') {
			num -= (len - j - 1);
			break;
		}
	}

	char* trim = calloc((num + 1), sizeof(char));

	size_t k = 0;
	for (i; i <= len - (len - j); i++) {
		trim[k] = s[i];
		k++;
	}
	return trim;
}