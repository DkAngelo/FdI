/*#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

char* concatena(const char* prima, const char* seconda)
{
	size_t l1 = strlen(prima);
	size_t l2 = strlen(seconda);

	size_t l = l1 + l2;

	char* a = malloc(l * sizeof(char));

	a = strcpy(a, prima);
	a = strcat(a, seconda);

	return a;


} 