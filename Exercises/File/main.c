#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x = 266;
	char s[] = "prova";
	FILE* f;

	//modalità testo = modalità in cui se provo a scrivere un byte che vale 10 in realtà scrive 13 e 10
	
	f = fopen("out1", "w");
	fprintf(f, "%i\n%s", x, s);		//prende dati binari e ne produce la normale rappresentazione
									// 32 36 36 0d 0a p r o v a
	fclose(f);

	//in binario il 10 vale solo 10

	f = fopen("out2", "wb");
	fprintf(f, "%i\n%s", x, s);		// 32 36 36 0a p r o v a
	fclose(f);

	
	f = fopen("out3", "w");
	fwrite(&x, sizeof x, 1, f);		//scrive il numero in binario all'interno del file 
									//ATTENZIONE: CON W, 10 VALE 13 10. SEI STUPIDO.
	fwrite(&s, sizeof s, 1, f);

									//entrambi i file contengono lo zero-terminatore di s
	f = fopen("out4", "wb");
	fwrite(&x, sizeof x, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fclose(f);

	return 0;

}									//NB: usa sempre wb, a meno che non devi lavorare solo con il testo