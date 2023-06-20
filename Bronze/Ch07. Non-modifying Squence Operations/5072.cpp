#include <iostream>
#include <algorithm>
#define N 1000

using namespace std;

int n, a[N + 1], b[N + 1];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1, b + n + 1);
}

void core()
{
	int cnt1 = 0, cnt2 = 0;

	for (int i = 1; i <= n; i++)
		if (a[i] != b[i])
		{
			for (int j = i + 1; j <= n; j++)
				if (a[i] == b[j] && b[i] == a[j])
				{
					a[i] = b[i];
					a[j] = b[j];
					cnt1++;
					break;
				}
		}

	for (int i = 1; i <= n; i++)
		if (a[i] != b[i])
		cnt2++;

	cout << cnt1 + (cnt2 / 3) * 2 << endl;
}

int main()
{
	input();
	core();
	return 0;
}