#include <iostream>
#include <stack>

using namespace std;

int n, x, o;
stack<int> S;

int main()
{
	cin >> n;
	while (true) {
		cin >> o;
		if (o == 1)
		{
			cin >> x;
			if (S.size() < 3)
				S.push(x);
		}
		else if (o == 2)
		{
			if (!S.empty())
				S.pop();
		}
		else if (o == 0)
		{
			cout << S.size() << '\n';
			while (!S.empty())
			{
				cout << S.top() << " ";
				S.pop();
			}
			return 0;
		}
	}
}