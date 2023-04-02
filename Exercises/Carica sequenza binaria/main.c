#include "sequenza.h"

int main(void) {
	
	struct seq s;
	seq_load("seq1.bin", &s);
	seq_load("seq2.bin", &s);
	seq_load("seq3.bin", &s);
	seq_load("seq4.bin", &s);
}