#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool inverti_case(const char* nomefilein, const char* nomefileout) {

	FILE* i = fopen(nomefilein, "r");
	if (i == NULL)
		return false;
	FILE* o = fopen(nomefileout, "w");
	if (o == NULL)
		return false;

	while (1) {
		int c = fgetc(i);
		if (c == EOF)
			break;
		if (isupper(c))
			c = tolower(c);
		else if (islower(c))
			c = toupper(c);
		fputc(c, o);
	}
	fclose(i);
	fclose(o);
	return true;
}