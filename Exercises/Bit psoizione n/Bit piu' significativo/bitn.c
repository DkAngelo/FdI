unsigned char bit_n(unsigned int val, unsigned char n) {

	unsigned char i, base = 2, risultato = 1;

	if (n != 0) {
		for (i = 1; i <= n; i += 1) {

			risultato = risultato * base;

		}
	}
	return val & risultato;
}

int main(void) {

	unsigned int val = 123;
	unsigned char n = 1;
	unsigned char bit;

	bit = bit_n(val, n);

	return 0;
}