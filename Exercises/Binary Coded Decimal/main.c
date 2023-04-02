#include "bcd.h"

extern ushort bin2bcd(ushort val);

int main(void) {

	ushort bcd = bin2bcd(65435);

	return 0;
}