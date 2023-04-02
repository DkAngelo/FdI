#include "product.h"

void write_products(FILE* f, const struct product* list, size_t n) {
	fprintf(f, "[\n");
	if (n != 0) {
		for (size_t i = 0; i < n; i++) {
			fprintf(f, "	{\n");
			fprintf(f, "		\"productId\": \"%s\",\n", list[i].productId);
			fprintf(f, "		\"fullName\": \"%s\",\n", list[i].fullName);
			fprintf(f, "		\"price\": %i\n", list[i].price);
			if (i != n - 1)
				fprintf(f, "	},\n");
			else
				fprintf(f, "	}\n");
		}
	}
	fprintf(f, "]");
}