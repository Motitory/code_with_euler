#include <iostream>
#include <queue>

using namespace std;

queue<int> Q;
int n, m, k;

void input()
{
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++)
		Q.push(((m - 1) + i) % n + 1);
}

void core()
{
	for (int i = 1; i <= n - 1; i++)
	{
		cout << Q.front() << ' ';
		Q.pop();
		for (int j = 1; j <= k - 1; j++)
		{
			Q.push(Q.front());
			Q.pop();
		}
	}

	cout << '\n' << Q.front() << '\n';
}

int main()
{
	input();
	core();
	return 0;
}