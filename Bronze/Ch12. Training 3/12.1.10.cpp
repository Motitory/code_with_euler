#include <iostream>
#include <string>

using namespace std;

int n;
string a[101];
int maxIdx = 0;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[maxIdx].length() < a[i].length())
			maxIdx = i;
	}

	cout << a[maxIdx] << '\n';

	return 0;
}