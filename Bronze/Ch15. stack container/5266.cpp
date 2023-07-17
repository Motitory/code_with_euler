#include <iostream>
#include <stack>
#define N 50'000

using namespace std;

int n, w, x[N + 1], y[N + 1];
stack<int> S;

void input()
{
	cin >> n >> w;
	for (int i = 1; i <= n; i++)
		cin >> x[i] >> y[i];
}

void core()
{
	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		while (!S.empty() && S.top() > y[i])
			S.pop();
		if (S.empty() || (!S.empty() && S.top() < y[i]))
		{
			if (y[i] > 0)
			{
				S.push(y[i]);
				cnt++;
			}
		}
	}

	cout << cnt << '\n';
}

int main()
{
	input();
	core();
	return 0;
}