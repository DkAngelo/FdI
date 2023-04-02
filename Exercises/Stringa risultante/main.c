#include <stdlib.h>
#include <stdint.h>
#include <string.h>


extern char* concatena(const char* prima, const char* seconda);

int main(void) {

	char s1[] = "ab";
	char s2[] = "cdefgh";
	char* s;

	s = concatena(s1, s2);

	free(s);

	return 0;
}

