#include "angoli.h"

int main (void){

	struct angolo a = { 180, 30, 15 };
	struct angolo b = { 90, 29, 2 };

	struct angolo c = differenza_angoli(a, b);

	return 0;
}