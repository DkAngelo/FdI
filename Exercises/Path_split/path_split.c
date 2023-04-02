#define _CRT_SECURE_NO_WARNINGS

#include "path_split.h"

void path_split(const char* str, char** path, char** filename) {

	if (str == NULL) {
		*path = NULL;
		*filename = NULL;
		return;
	}

	char *p = strrchr(str, '\\');
	*path = calloc(strlen(str) - strlen(p) + 2, 1);
	*filename = calloc(strlen(p + 1) + 1, 1);

	strncpy(*path, str, p - str + 1);
	strcpy(*filename, p+1);
}