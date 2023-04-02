#define _CRT_SECURE_NO_WARNINGS

#include "imperial.h"

double to_meter(const char* imperial_length) {

	int x, j;
	char c[256] = "";
	double inch = 0.0254;
	size_t i;

	char* inches[] = { "inch", "inches", "in", "in.", "\"" };
	for (i = 0; i < 5; i++) {
		sscanf(imperial_length, "%i%n", &x, &j);
		char *s = strstr(imperial_length, inches[i]);
	}
}

int main(void) {
	to_meter("1 inch");
}