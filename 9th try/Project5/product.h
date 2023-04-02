#if !defined PRODUCT_H
#define PRODUCT_H

#include <stdlib.h>
#include <stdio.h>

struct product {
    char* productId;
    char* fullName;
    int price;
};

#endif //PRODUCT_H