#include <cstdio>

int main(void)
{
	double a = 0.00000000000000000001;
	double b = 1.000000E-20;
	double c = 1.23E-4;
	double d = 1.23E-5;

	printf("%.20lf\n", a);
	printf("%E\n", b);
	printf("%g\n", c);
	printf("%g\n", d);

	return 0;
}