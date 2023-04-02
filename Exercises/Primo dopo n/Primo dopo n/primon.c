unsigned int prossimo_numero_primo(unsigned int x) {

	unsigned int i = x + 1, j;

	for (j = 2; j <= i; j++) {

		if ((i % j) == 0) {

			if (i == j) {
				return i;
			}
			else {
				i = i + 1;
			}
		}

	}

}

int main(void){

	unsigned int p, x = 3;
	p = prossimo_numero_primo(x);
	
	return 0;

}