#include <iostream>
#include <queue>

#define N 3501

using namespace std;

queue<int> Q;
int n, a[N + 1], cnt;
bool check[33000];

void input()
{
	for (int i = 2; i <= 32611; i++)
	{
		if (check[i] == false)
		{
			a[++cnt] = i;
			for (int j = i * i; j <= 32611; j+= i)
				check[j] = true;
		}
	}

	cin >> n;
	for (int i = 1; i <= n; i++)
		Q.push(i);
}

void core()
{
	for (int i = 1; i <= n - 1; i++)
	{
		int r = (a[i] - 1) % Q.size() + 1;
		for (int j = 1; j <= r - 1; j++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();
	}

	cout << Q.front() << '\n';
}

int main()
{
	input();
	core();
	return 0;
}