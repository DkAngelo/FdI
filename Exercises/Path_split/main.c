#include "path_split.h"

int main(void) {

	char* path, * filename;
	path_split("c:\\user\\esami\\FdI2017\\esercizi\\file.txt", &path, &filename);
	free(path);
	free(filename);

	return 0;
}