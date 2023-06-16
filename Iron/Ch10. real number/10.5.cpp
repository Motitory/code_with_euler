#include <cstdio>

int main(void)
{
	int i, a[10];
	double d, b[10];

	printf("%zu %zu\n", sizeof(int), sizeof(double));		// 자료형
	printf("%zu %zu\n", sizeof 5, sizeof(5.0));					// 상수
	printf("%zu %zu\n", sizeof i, sizeof(d));						// 변수
	printf("%zu %zu\n", sizeof a, sizeof(b));						// 배열

	return 0;
}