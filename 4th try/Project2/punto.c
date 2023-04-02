#include "punto.h"

int scala_punto(struct punto* p, const struct immagine* img, const struct immagine* img_new) {

	if (p == NULL || img == NULL || img_new == NULL)
		return - 1;

	double oldw = img->w;
	double oldh = img->h;
	double neww = img_new->w;
	double newh = img_new->h;
	double x = p->x;
	double y = p->y;

	double xnew = x * (neww / oldw);
	double ynew = y * (newh / oldw);

	p->x = xnew;
	p->y = ynew;
	if (xnew >= .5)
		p->x+=1;
	if (ynew >= .5)
		p->y += 1;
	
	if (p->x <= img_new->w && p->y <= img_new->h)
		return 0;
	else
		return -1;

}

int main(void) {

	struct immagine* i = malloc(sizeof(struct immagine));
	i->w = 2;
	i->h = 4;
	struct immagine* n = malloc(sizeof(struct immagine));
	i->w = 5;
	i->h = 6;
	struct punto* p = malloc(sizeof(struct punto));
	p->x = 2;
	p->y = 3;

	scala_punto(p, i, n);
}