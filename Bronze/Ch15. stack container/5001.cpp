#include <iostream>
#include <stack>

#define N 80'000

using namespace std;

stack<int> S;
int n, h[N + 1], c[N + 1];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> h[i];
}

void core()
{
	long long cnt = 0LL;

	for (int i = n; i >= 1; i--)
	{
		while (!S.empty() && h[i] > h[S.top()])
		{
			c[i] += (c[S.top()] + 1);
			S.pop();
		}
		S.push(i);
		cnt += c[i];
	}

	cout << cnt << '\n';
}

int main()
{
	input();
	core();
	return 0;
}