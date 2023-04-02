#include <stdlib.h>
#include <string.h>

char concatena(const char* prima, const char* seconda) {

	size_t l1, l2;

	if (prima == NULL) {
		l1 = 0;
	}
	else { l1 = strlen(prima); };
	
	if (seconda == NULL) {
		l2 = 0;
	}
	else { l2 = strlen(seconda); };

	size_t l = l1 + l2;
	char* ris = malloc(l * sizeof(char));
	ris[l] = 0;

	for (size_t i = 0; i < l1; i++) {
			ris[i] = prima[i];
		}

	for (size_t i = 0; i < l2; i++) {
		ris[l1 + i] = seconda[i];
	}
	return ris;
}