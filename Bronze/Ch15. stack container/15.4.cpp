#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n, x;
	stack<int> S;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		S.push(x);
	}

	while (!S.empty())
	{
		cout << S.top() << " ";
		S.pop();
	}
	return 0;
}