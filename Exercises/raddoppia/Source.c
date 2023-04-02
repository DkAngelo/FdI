#include <stdlib.h>
#include <stdint.h>

void raddoppia_tre(uint32_t* x) {
	x[0] = x[0] * 2;
	x[1] = x[1] * 2;
	x[2] = x[2] * 2;
}

int main(void) {

	uint32_t* bossetti = malloc(3 * sizeof(uint32_t));
	if (bossetti != NULL) {
		bossetti[0] = 12;
		bossetti[1] = 59;
		bossetti[2] = 83;
		raddoppia_tre(bossetti);
		free(bossetti);
	}
	return 0;
}