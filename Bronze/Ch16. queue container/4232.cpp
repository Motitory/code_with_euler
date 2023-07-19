#include <iostream>
#include <queue>

using namespace std;

int n, k;
queue<pair<int, int>> Q;

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		Q.push({ i, 40 });

	int m = 0;
	
	while (!Q.empty())
	{
		m = (m % k) + 1;
		int coin = m;
		while (!Q.empty() && coin)
		{
			int num = Q.front().first;
			int dollar = Q.front().second;

			Q.pop();
			if (dollar <= coin)
			{
				coin -= dollar;
				cout << num << ' ';
			}
			else
			{
				Q.push({ num, dollar - coin });
				coin = 0;
			}
		}
	}

	return 0;
}
