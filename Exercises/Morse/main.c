#include <stdlib.h>
#include <string.h>

extern char* codifica_morse(const char* testo);
int main(void) {

	char *ris = codifica_morse("CIAO MAMMA");

	free(ris);
	return 0;
}