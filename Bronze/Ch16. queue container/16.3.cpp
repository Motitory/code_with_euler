#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, x;
	queue<int> Q;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		Q.push(x);
	}

	while (!Q.empty())
	{
		cout << Q.front() << '\n';
		Q.pop();
	}
	return 0;
}