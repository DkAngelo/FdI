#include <string.h>
#include <stdlib.h>

char* rimuovi_singoli_spazi(const char* s) {
	if (s == NULL)
		return NULL;

	size_t len = strlen(s);
	size_t len2 = len;

	size_t i;
	for (i = 0; i < len; i++) {
		if (i == 0){
			if (s[i] == ' ' && s[i + 1] != ' ')
				len2 -= 1;
		}
		else if (i == len - 1) {
			if (s[i] == ' ' && s[i - 1] != ' ')
				len2 -= 1;
		}
		else if (s[i] == ' ' && s[i - 1] != ' ' && s[i + 1] != ' ')
				len2 -= 1;
	}

	char* res = calloc(len2 + 1, 1);
	size_t j = 0;
	for (i = 0; i < len; i++) {
		if (i == 0) {
			if (s[i] == ' ' && s[i + 1] != ' ')
				continue;
		}
		else if (i == len - 1) {
			if (s[i] == ' ' && s[i - 1] != ' ')
				continue;
		}
		else if (s[i] == ' ' && s[i - 1] != ' ' && s[i + 1] != ' ')
				continue;
		res[j] = s[i];
		j++;
	}

	return res;
}

int main(void) {

	char str[] = " c i a o n e";
	rimuovi_singoli_spazi(str);

}