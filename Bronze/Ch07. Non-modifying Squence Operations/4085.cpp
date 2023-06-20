#include <iostream>
#include <algorithm>
#define N 20000

using namespace std;

int n, a[N + 1];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	
	int sum = 0;

	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++)
		sum += abs(a[(n + 1) / 2] - a[i]);

	cout << sum << endl;

	return 0;
}