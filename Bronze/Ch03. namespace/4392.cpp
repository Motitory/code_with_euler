#include <iostream>

#define P 1000

using namespace std;

int n, p, c, a[P], s[P];

void input()
{
	int x;
	
	cin >> n >> p >> c;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a[x]++;
	}

	for (int i = 1; i <= p - 1;i++)
		s[i] = s[i - 1] + a[i];
}

void core()
{
	int best = 0;

	for (int len = p - 1; len >= 1 && !best; len--)
		for (int i = len; i <= p - 1 && !best; i++)
			if (s[i] - s[i - len] <= c)
				best = len;

	cout << best;
}


int main()
{
	input();
	core();
	return 0;
}