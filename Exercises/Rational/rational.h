#if !defined RATIONAL_H
#define RATIONAL_H

struct rational {
    int num;
    unsigned int den;
};

#include <stdio.h>
#include <stdlib.h>

extern struct rational* rational_read(const char* filename, size_t* size);

#endif //RATIONAL_H