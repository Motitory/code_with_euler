#include <iostream>
#include <string>
#include <algorithm>

#define N 100

using namespace std;

string a[N + 1];
int n;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int ch = 1;

	while (a[ch] != string("EULERTV1"))
	{
		cout << 1;
		ch++;
	}

	while (ch >= 2)
	{
		cout << 4;
		swap(a[ch - 1], a[ch]);
		ch--;
	}

	while (a[ch] != string("EULERTV2"))
	{
		cout << 1;
		ch++;
	}

	while (ch >= 3)
	{
		cout << 4;
		swap(a[ch - 1], a[ch]);
		ch--;
	}

	cout << '\n';

	return 0;
}