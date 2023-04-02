unsigned int somma_cifre(unsigned int x) {
	unsigned int i, c, s = 0;
	for (i = 1; x != 0; i++) {

		c = x % 10;
		x = x / 10;
		s = s + c;

	}
	return s;
}

int main(void) {

	unsigned int x = 160;
	unsigned int s;

	s = somma_cifre(x);

	return 0;

}