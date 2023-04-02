#include <stdlib.h>
#include <string.h>

void bad_word_filter(char* s, char** words, size_t nwords) {
	
	if (s == NULL || words == NULL)
		return;

	for (size_t i = 0; i < nwords; i++) {
		char* pos = strstr(s, words[i]);
		if (pos) {
			size_t len = strlen(words[i]);
			for (size_t j = 0; j < len; j++) {
				pos[j] = '*';
			}
		}
	}
}