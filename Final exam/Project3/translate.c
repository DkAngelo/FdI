#include <string.h>

void translate(char* str, const char* from, const char* to) {

	if (str == NULL || from == NULL || to == NULL)
		return;

	size_t len1 = strlen(str);
	size_t len2 = strlen(from);
	size_t len3 = strlen(to);

	if (len2 != len3)
		return;

	for (size_t i = 0; i < len1; i++) {
		for (size_t j = 0; j < len2; j++) {
			if (str[i] == from[j]) {
				for (size_t k = 0; k < len3; k++) {
					if (j == k) {
						str[i] = to[k];
						break;
					}
				}
			}
		}
	}
	return;
}