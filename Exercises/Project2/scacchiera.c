#include "scacchiera.h"

void stampa_scacchiera(const struct scacchiera* sc) {

    if (sc->caselle != NULL) {
        int j = 7;
        for (size_t r = 0; r < 8; r++) {
            printf("+---+---+---+---+---+---+---+---+\n");
            int i = j;
            for (size_t c = 0; c < 8; c++) {
                printf("|");
                printf(" %c ", sc->caselle[i]);
                i += (8);
            }
            printf("|\n");
            j--;
        }
        printf("+---+---+---+---+---+---+---+---+");

    }

}