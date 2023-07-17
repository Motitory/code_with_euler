#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<char> LS, RS;
string str;

void input()
{
	cin >> str;

	int len = str.length();
	for (int i = 0; i < len; i++)
		LS.push(str[i]);
}

void core()
{
	int n;
	char order, ch;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> order;
		if (order == 'L' && !LS.empty())
		{
			RS.push(LS.top());
			LS.pop();
		}
		else if (order == 'D' && !RS.empty())
		{
			LS.push(RS.top());
			RS.pop();
		}
		else if (order == 'B' && !LS.empty())
			LS.pop();
		else if (order == 'P')
		{
			cin >> ch;
			LS.push(ch);
		}
	}
}

void output()
{
	while (!LS.empty())
	{
		RS.push(LS.top());
		LS.pop();
	}

	while (!RS.empty())
	{
		cout << RS.top();
		RS.pop();
	}
}

int main()
{
	input();
	core();
	output();
	return 0;
}
