#include <stdio.h>
#include <string.h>
char* concatena(const char* prima, const char* seconda);
int main(void) {

	char s1[] = "Questa e' la ";

	char s2[] = "stringa risultante.";

	char* s;

	s = concatena(s1, s2);
	printf("%s", s);
	free(s);

}
char* concatena(const char* prima, const char* seconda) {
	size_t len1 = strlen(prima);
	size_t len2 = strlen(seconda);
	size_t n = len1 + len2;
	char* v = malloc(n * sizeof(char));
	strcat(v, prima);
	strcat(v, seconda);
	return v;
}