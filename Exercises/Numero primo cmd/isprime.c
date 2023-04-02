#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {

	if (argc != 2)
		return 1;

	char* endptr;
	int a = strtol(argv[1], &endptr, 10);
	if (a > 0) {
		
		if (a == 1) {
			printf("false");
			return 0;
		}
		if (a == 2) {
			printf("true");
			return 0;
		}

		for (size_t i = 2; i < a; i++) {
			if ((a % i) == 0) {
				printf("false");
				return 0;
			}	
		}

		printf("true");
		return 0;
	}
	else if (a == 0) {
		printf("false");
		return 0;
	}
	return 1;
}