#include <cstdio>

int main(void)
{
	int i;
	float f = 0.0;
	double d = 0.0;
	long double ld = 0.0;

	for (i = 1; i <= 100; i++)
	{
		f += 0.01;
		d += 0.01;
		ld += 0.01;
	}

	printf("float: %f\n", f);
	printf("double: %lf\n", d);
	printf("long double: %Lf\n", ld);

	return 0;
}