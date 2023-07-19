#include <iostream>
#include <queue>

using namespace std;

int n, menu, choice;
queue<int> Q;

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> menu;
		if (menu == 1)
		{
			cin >> choice;
			Q.push(choice);
		}
		else
			if (!Q.empty())
				Q.pop();
	}

	cout << Q.size() << '\n';
	if (Q.size())
	{
		cout << Q.front() << ' ' << Q.back() << '\n';
	}

	return 0;
}