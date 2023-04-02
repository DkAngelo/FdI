#define CRT_SECURE_NO_WARNINGS

#include "palindroma.h"

bool palindroma(const char* str) {

	if (str == NULL || str == "")
		return NULL;

	size_t j = 0;
	size_t len = strlen(str);
	
	char *ris = calloc(len+1, 1);

	for (size_t i = len; i!=0 ; i--) {
		ris[j] = str[i-1];
		j++;
	}

	if (strcmp(ris, str) == 0) {
		return true;
	}
	else {
		return false;
	}
}