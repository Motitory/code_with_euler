#include <iostream>
#include <string>
#define N 100

using namespace std;

int n;
string a[N + 1];

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i].length() >= 10)
			a[i] = a[i].front() + to_string(a[i].length() - 2) + a[i].back();
	}

	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << '\n';
	}

	return 0;
}