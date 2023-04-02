#include "utf8.h"

size_t utf8_encode(uint32_t codepoint, uint8_t seq[4]) {

	uint32_t b = codepoint;
	size_t i = 0;

	while (1) {
		
		b /= 2;
		i++;
		if (b / 2 == 0)
			break;

	}
	if (codepoint > 0x007f) {
		seq[0] = 
	}
	else if(codepoint > 0x07ff)
	else if(codepoint> 0xffff)
	else

}