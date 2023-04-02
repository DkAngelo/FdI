#include <stdlib.h>

double binomialesimmetrico(unsigned int n, unsigned int h, unsigned int k) {

	double nfat = 1, hfat = 1, kfat = 1;
	size_t i = 2;
	if (n != 0 && n != 1) {
		for (i = n - 1, nfat = n; i != 0; i--)
			nfat *= i;
	}
	if (h != 0 && h != 1) {
		for (i = h - 1, hfat = h; i != 0; i--)
			hfat *= i;
	}
	if (k != 0 && k != 1) {
		for (i = k - 1, kfat = k; i != 0; i--)
			kfat *= i;
	}
	return nfat / (kfat * hfat);
}