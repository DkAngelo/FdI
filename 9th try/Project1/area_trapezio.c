#include <math.h>

double area_trapezio(double a, double b, double c, double d) {
	
	double radq = sqrt(c * c - (0.25 * ((b - a) + ((c * c - d * d) / (b - a))) * ((b - a) + ((c * c - d * d) / (b - a)))));
	return (a + b) * 0.5 * radq;
}