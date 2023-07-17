#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> S;
string a;

void input()
{
	cin >> a;
}

void core()
{
	int cnt = 0, len = a.length();

	for (int i = 0; i < len; i++)
	{
		if (a[i] == '(')
			S.push(i);
		else
		{
			if (i - S.top() == 1)
				cnt += S.size() - 1;
			else
				cnt++;
			S.pop();
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