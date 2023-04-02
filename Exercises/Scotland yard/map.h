#if !defined MAP_H
#define MAP_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

struct connections {
    size_t n;
    bool* data;
};

extern struct connections* load_connections(const char* filename);

#endif //MAP_H