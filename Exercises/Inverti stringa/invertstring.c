#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char*argv[]) {

	if (argc != 2)
		return 1;

	
	size_t len = strlen(argv[1]);
	
	for (size_t i = 0; i < len; ++i) {
		fputc (argv[1][len-1-i], stdout);
	}
	return 0;
}