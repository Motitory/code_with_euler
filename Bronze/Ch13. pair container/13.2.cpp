#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y;
	pair<int, int> a[6];

	for (int i = 1; i <= 5; i++)
	{
		cin >> x >> y;
		a[i] = { x, y };
	}

	sort(a + 1, a + 6);

	cout << "-----" << endl;
	for (int i = 1; i <= 5; i++)
		cout << a[i].first << " " << a[i].second << '\n';

	return 0;
}