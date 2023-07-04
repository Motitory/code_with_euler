#include <iostream>
#include <algorithm>

using namespace std;

void output(const int& x)
{
	cout << x << ' ';
}

int s, e, a[11];

int main()
{
	for (int i = 1; i <= 10; i++)
		cin >> a[i];

	cin >> s >> e;

	reverse(a + s, a + e + 1);

	for_each(a + 1, a + 11, output);
	cout << endl;
	return 0;
}