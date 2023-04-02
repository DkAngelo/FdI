int ismultiple(int x, int y) {

	if (x == y) {
		return 1;
	}
	else if (x != y) {
		int t = x % y;
			if (t == 0) {
				return 1;
			}
			else if (t != 0) {
				return 0;
			}
	}
}


int main(void)
{
	int x, y, z;
	x = 6;
	y = 4;
	z = ismultiple(x, y);
	return 0;
}