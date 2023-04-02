#include <stdlib.h>
#include <stdint.h>

size_t lungh(const char* str) {
	
	size_t num = 0;
	
	for (size_t i = 0; str[i] != 0; i++) 
	{
		++num;
	}
	return num;
}

int main(void) {

	char s[] = "stringa di prova";
	size_t len = lungh(s);

	return 0;
}