#include "bcd.h"

ushort bin2bcd(ushort val){

    ushort x = val, i, j, t, ris = 1, a, c = 0, k, quattro = 4;
    for (i = 0; x != 0; i++){
        x/=10;
    }

    if (x>4){
        ushort y = val/10000;
        val-=y;
    }

    t = i;

    ushort b[] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09};
    
    for (k = 0; k < t; k++){
        
        for (j = 1; j < i; j++){
            ris*=10;
        } 
    if (i !=1){
        quattro *= (i-1);
    } 

    else {quattro = 0;}

        a = val/ris;

        c += (b[a] << quattro);
        val  -= (a * ris);

        ris = 1;
        quattro = 4;
        i--;
    }

    return c;
}