#include <iostream>
#include <stack>
#include <algorithm>

#define N 50'000

using namespace std;

stack<int> S;
int n, h[N + 1], v[N + 1], c[N + 1];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> h[i] >> v[i];
}

void core()
{
	for (int i = 1; i <= n; i++)
	{
		while (!S.empty() && h[i] > h[S.top()])
		{
			c[i] += v[S.top()];
			S.pop();
		}
		S.push(i);
	}

	while (!S.empty())
		S.pop();

	for (int i = n; i >= 1; i--)
	{
		while (!S.empty() && h[i] > h[S.top()])
		{
			c[i] += v[S.top()];
			S.pop();
		}
		S.push(i);
	}

	cout << *max_element(c + 1, c + n + 1) << '\n';
}

int main()
{
	input();
	core();
	return 0;
}