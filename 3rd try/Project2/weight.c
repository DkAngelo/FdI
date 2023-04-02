#include "weight.h"

double ideal_weight(int h, int age, char sex, enum formula f) {

	if (h < 0 || age < 0)
		return -1;

	if (f == lorenz) {
		if (sex == 'M')
			return h - 100 - (h - 150) / 4;
		else if (sex == 'F')
			return h - 100 - (h - 150) / 2;
		else
			return -1;
	}
	else if (f == berthean) {
		if (sex == 'M' || sex == 'F')
			return 0.8 * (h - 100) + age / 2;
		else
			return -1;
	}
	else if (f == keys) {
		if (sex == 'M')
			return (h / 100) * (h / 100) * 22.1;
		else if (sex == 'F')
			return (h / 100) * (h / 100) * 20.6;
		else
			return -1;
	}
	else
		return -1;
}