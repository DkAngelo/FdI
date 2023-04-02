#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int accodaTuttiFile(const char* fileConNomi, const char* fileOutput) {

	FILE* f = fopen(fileConNomi, "r");
	if (f == NULL)
		return -1;

	FILE* g = fopen(fileOutput, "wb");
	if (g == NULL)
		return -1;

	char s[256] = "";
	char t[256] = "";
	size_t a;
	while (1) {
		int c = fscanf(f, "%s", &s);
		if (c == EOF)
			break;
		c = fgetc(f);
		while (1) {
			if (c == ' ') {
				for (size_t i = 0; ; i++) {
					a = strlen(s);
					s[a] = ' ';
					fscanf(f, "%s", &t);
					strcat(s, t);
				}
				fgetc(f);
			}
			else {
				fseek(f, -1, SEEK_CUR);
				break;
			}
		}
		FILE* h = fopen(s, "rb");
		if (h == NULL) 
			continue;

		while (1) {
			int d = fgetc(h);
			if (d == EOF) {
				fclose(h);
				break;
			}
			fputc(d, g); 
		}
	}
	fclose(g);
	return 0;
}

int main(void) {

	accodaTuttiFile("es5_elenco.txt", "test.txt");

}