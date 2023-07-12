#include <iostream>
#include <string>
#define N 100

using namespace std;

string a[N + 1], str;
int n;

void input()
{
	cin >> n >> str;

	for (auto& ch : str)
		ch = tolower(ch);

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		for (auto& ch : a[i])
			ch = tolower(ch);
	}
}

void core()
{
	int cnt = 0;

	for (int i = 1; i <= n; i++)
		if (a[i].find(str) == 0)
		{
			cout << a[i] << '\n';
			cnt++;
		}

	if (!cnt)
		cout << "NOT FOUND" << '\n';
}

int main()
{
	input();
	core();
	return 0;
}