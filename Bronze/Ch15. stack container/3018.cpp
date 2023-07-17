#include <iostream>
#include <stack>

using namespace std;

stack<int> S;
int a[5];
string res;

int main()
{
	for (int i = 1; i <= 4; i++)
		cin >> a[i];

	int num = 1;

	for (int i = 1; i <= 4; i++)
	{
		S.push(a[i]);
		res += "S";
		while (!S.empty() && S.top() == num)
		{
			S.pop();
			res += "X";
			num++;
		}
	}

	if (!S.empty())
		cout << "impossible" << '\n';
	else
		cout << res << endl;

	return 0;
}