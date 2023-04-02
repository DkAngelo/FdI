int primo (unsigned int val) {

	unsigned int i;
	unsigned p = 0;

	for (i = 2;i < val; i = i + 1) {

		if ((val % i) == 0){
		
			return p = 0;
		}

	}

	return p = 1;
}

int main(void) {

	unsigned int val = 17;
	unsigned int p;

	p = primo(val);

	return 0;

}