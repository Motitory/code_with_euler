#include <iostream>
#include <algorithm>
#define N 100

using namespace std;

int n, f[N + 1], r[N + 1];
int r1[N + 1], f1[N + 1];

void input()
{
	cin >> n; 
	for (int i = 1; i <= n; i++)
	{
		cin >> f[i];
		f1[f[i]]++;
	}

	for (int i = 1; i <= n; i++)
	{
		cin >> r[i];
		r1[r[i]]++;
	}
}

void core()
{
	int minv = 0, maxv = 0;

	for (int i = 1; i <= n; i++)
	{
		minv += max(f1[i], r1[i]) * i;
		for (int j = 1; j <= n; j++)
			maxv += min(f[i], r[j]);
	}

	cout << minv << " " << maxv << endl;
}

int main()
{
	input();
	core();
	return 0;
}