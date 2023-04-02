#include <stdlib.h>

size_t find_first_partition(const int* seq, size_t n){
	if (seq == NULL || n == 0)
		return 0;

	size_t i, j, res;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			res = i;
			if (j < i && seq[i] > seq[j])
				continue;
			else if (j > i && seq[i] < seq[j])
				continue;
			else if (j == i)
				continue;
			else {
				res = n;
				break;
			}
		}
		if (res != n)
			return res;
	}
}