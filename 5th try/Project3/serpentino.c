#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* serpentino_encode(const char* s) {

	size_t len = strlen(s);
	size_t len2 = len;

	size_t i, j;
	char c;
	for (i = 0; i < len; i++) {
		c = s[i] - 'a';
		switch (c) {
		case(0):
			len2 += 2;
			continue;
		case(4):
			len2 += 2;
			continue;
		case(8):
			len2 += 2;
			continue;
		case(14):
			len2 += 2;
			continue;
		case(20):
			len2 += 2;
			continue;
		}
	}
	char* ris = calloc(len2+1, 1);
	for (i = 0, j = 0; i < len2; i++, j++) {
		c = s[j] - 'a';
		ris[i] = s[j];
		switch (c) {
		case(0):
			i++;
			ris[i] = 's';
			i++;
			ris[i] = 'a';
			continue;
		case(4):
			i++;
			ris[i] = 's';
			i++;
			ris[i] = 'e';
			continue;
		case(8):
			i++;
			ris[i] = 's';
			i++;
			ris[i] = 'i';
			continue;
		case(14):
			i++;
			ris[i] = 's';
			i++;
			ris[i] = 'o';
			continue;
		case(20):
			ris[i] = s[i];
			i++;
			ris[i] = 's';
			i++;
			ris[i] = 'u';
			continue;
		}
	}
	return ris;
}