#include "map.h" 

int main(void) {

	struct connections *ris = load_connections("example.txt");

	free(ris->data);
	free(ris);

	return 0;
}