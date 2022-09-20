#include <cstdio>
#include <cmath>

int main(void)
{
	int N;
	scanf("%d", &N);

	int roundv, ceilv, floorv, truncv;
	roundv = int(round(N / 10.0) * 10);
	ceilv = int(ceil(N / 10.0) * 10);
	floorv = int(floor(N / 10.0) * 10);
	truncv = int(trunc(N / 10.0) * 10);

	printf("%d\n%d\n%d\n%d\n", roundv, ceilv, floorv, truncv);
	return 0;
}