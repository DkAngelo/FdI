#include "cerchio.h"

bool nel_cerchio(const struct punto* p, const struct cerchio* c) {

	if (p == NULL || c == NULL)
		return false;

	double dist = sqrt((p->x * p->x - c->x * c->x) + (p->y * p->y + c->y * c->y));
	if (dist > c->r)
		return false;
	else
		return true;
}