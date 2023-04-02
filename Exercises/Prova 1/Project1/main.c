double area_triangolo(double base, double altezza)
{
	return base * altezza / 2.0;
}
double x, y;
double val = 3.81, z = 1.42e5;
int main(void)
{
	x = area_triangolo(3.2, val);
	y = area_triangolo(val + z / 3.1, 8.12);
	return 0;
}