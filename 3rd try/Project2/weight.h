#if !defined WEIGHT_H
#define WEIGHt_H

#include <stdbool.h>

enum formula { lorenz, berthean, keys };
extern double ideal_weight(int h, int age, char sex, enum formula f);

#endif //WEIGHT_H