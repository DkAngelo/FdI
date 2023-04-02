unsigned int fattoriale(unsigned char val) {

	unsigned int risultato = 1;

	if (val < 2) {
		return risultato;
	}

	else {
		while (val > 0) {
			risultato *= val;
			val--;
		}
		return risultato;
	}
}

int main(void) {

	unsigned char val = 5;
	unsigned int f;

	f = fattoriale(val);

		return 0;

}