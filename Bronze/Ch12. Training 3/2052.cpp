#include <iostream>
#include <string>

using namespace std;

string str;
char a[17][6];
int n;

int main()
{
	cin >> str;
	n = str.length() / 5;

	for (int j = 1; j <= 5; j++)
		for (int i = 1; i <= n; i++)
			a[i][j] = str[(j - 1) * n + (i - 1)];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= 5; j++)
			cout << a[i][j];
	cout << '\n';
	
	return 0;
}