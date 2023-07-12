#include <iostream>
#include <string>
#include <algorithm>

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
		for (auto& ch : a[i])
			ch = tolower(ch);
	}

	sort(a + 1, a + n + 1);

	for (int i = 1; i <= n; i++)
		cout << a[i] << '\n';

	return 0;
}