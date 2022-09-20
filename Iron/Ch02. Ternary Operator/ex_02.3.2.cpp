#include <cstdio>

int main(void)
{
	int a[11] = { 7, -5, 4, -99, 45, 11, 0, 8, 50, 77 };
	int i, maxv, minv;

	maxv = minv = a[1];
	for (i = 2; i <= 10; i++)
	{
		maxv = maxv < a[i] ? a[i] : maxv;
		minv = minv > a[i] ? a[i] : minv;
	} 

	printf("%d\n", maxv);
	printf("%d\n", minv);
	return 0;
}