#include <iostream>
#include <algorithm>
#define N 50000

using namespace std;

int n, k;
double a[N + 1];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	cin >> k;

	nth_element(a + 1, a + k, a + n + 1, greater<>());
	cout.precision(2);
	cout << fixed << a[k] << '\n';
	return 0;
}