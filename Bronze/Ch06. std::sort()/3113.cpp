#include <iostream>
#include <algorithm>
#define N 1'000'000

using namespace std;

int n, l, k, a[N + 1], cnt;

void input()
{
	cin >> n >> l >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void core()
{
	sort(a + 1, a + n + 1);
	
	for (int i = 1; i <= n; i++)
		if (a[i] <= l)
		{
			cnt++;
			l += k;
		}
		else
			break;

	cout << cnt << "\n";
}

int main()
{
	input();
	core();
	return 0;
}