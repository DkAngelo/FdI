#include <stdlib.h>
#include <string.h>

extern size_t conta_parole(const char* s);

int main(void) {

	char f[] = "1 2 3 a b c";

	size_t n = conta_parole(f);

	return 0;
}