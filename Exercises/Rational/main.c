#include "rational.h"

int main(void) {

	size_t j;
	
	rational_read("file1.txt", &j);
	/*struct rational r2 = rational_read("file2.txt", &j);
	struct rational r3 = rational_read("file3.txt", &j);
	struct rational r4 = rational_read("file4.txt", &j);*/

	return 0;
}