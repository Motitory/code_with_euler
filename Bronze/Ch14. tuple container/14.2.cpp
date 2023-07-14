#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;

int main()
{
	int x, y, z;
	tuple<int, int, int> a[6];

	for (int i = 1; i <= 5; i++)
	{
		cin >> x >> y >> z;
		a[i] = { x, y, z };
	}

	sort(a + 1, a + 6);

	cout << "------------------------" << '\n';
	for (int i = 1; i <= 5; i++)
		cout << get<0>(a[i]) << " " << get<1>(a[i]) << " " << get<2>(a[i]) << '\n';

	return 0;
}