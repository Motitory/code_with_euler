#include <iostream>
#include <string>

#define N 100

using namespace std;

int n, childCnt, c[N + 1];
string a[N + 1];

void input()
{
	cin >> n;
}

int getNum(string name)
{
	for (int i = 1; i <= childCnt; i++)
		if (a[i] == name)
			return i;

	a[++childCnt] = name;
	return childCnt;
}

void core()
{
	int warning = 0;

	for (int i = 1; i <= n; i++)
	{
		string name;

		cin >> name;
		int num = getNum(name);

		if ((i - 1) - c[num] < c[num])
			warning++;
		c[num]++;
	}

	cout << warning << '\n';
}

int main()
{
	input();
	core();
	return 0;		
}