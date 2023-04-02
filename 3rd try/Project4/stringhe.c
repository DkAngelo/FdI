#define _CRT_SECURE_NO_WARNINGS

#include "stringhe.h"

char* title(const char* str) {

	if (str == NULL)
		return NULL;

	size_t len = strlen(str);
	char* caps = calloc(1, (len+1)*sizeof(char));
	strcpy(caps, str);

	size_t i;
	for (i = 0; i < len; i++) {
		if (islower(caps[i]) && i == 0) {
			caps[i] = toupper(caps[i]);
			continue;
		}
		if (isspace(caps[i]))
			if (islower(caps[i + 1]))
				caps[i+1] = toupper(caps[i + 1]);
	}
	return caps;
}