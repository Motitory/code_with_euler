#include <cstdio>
#include <cmath>

int main(void)
{
	int a = 1, b = 3;
	int c = 10, d = 3;

	printf("%.30lf\n", a / double(b) * 10);
	printf("%.30lf\n", c / double(d));

	if (double(a) / b * 10 == (double)c / d)
		printf("divide and comparison\n");
	if (fabs(double(a) / b * 10 - (double)c / d) < 0.0001)
		printf("fabs and tolerance\n");
	if (a * d * 10 == c * b)
		printf("transposition and comparison\n");
		
	return 0;
}