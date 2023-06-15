#include <cstdio>

int main(void)
{
	int n, i, maxv, cnt = 0;
	int a[10001];

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	maxv = -1;
	for (i = 1; i <= n; i++)
		if (maxv < a[i])
			maxv = a[i], cnt++;

	printf("%d\n", cnt);
	return 0;
}
