#include <iostream>
#include <queue>

using namespace std;

int n;

int main()
{
	cin >> n;

	int m = 0;

	while (true)
	{
		queue<int> Q;

		for (int i = 1; i <= n; i++)
			Q.push(i);
		m++;

		for (int i = 1; i <= n - 1; i++)
		{
			if (Q.front() == 13)
				break;
			Q.pop();

			int r = (m - 1) % Q.size() + 1;

			for (int j = 1; j <= r - 1; j++)
			{
				Q.push(Q.front());
				Q.pop();		
			}
		}

		if (Q.size() == 1 && Q.front() == 13)
		{
			cout << m << '\n';
			return 0;
		}
	}
}