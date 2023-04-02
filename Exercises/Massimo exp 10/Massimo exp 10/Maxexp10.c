char max_pot(unsigned int val) {

	 int i;

	for (i = -1; val != 0; i = i + 1) {

		val = val / 10;

	}

	return i;
}

unsigned int main(void){
	
	unsigned int exp;
	unsigned int val = 102;

	exp = max_pot(val);

	return 0;

}