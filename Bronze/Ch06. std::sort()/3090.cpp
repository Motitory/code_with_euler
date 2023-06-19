#include <iostream>
#include <algorithm>
#define N 1000

using namespace std;

int n, a[N + 1], b[N + 1], sum;

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		cin >> b[i];
}

void core()
{
	sort(a + 1, a + n + 1);
	sort(b + 1, b + n + 1);

	for (int i = 1; i <= n; i++)
		sum += abs(a[i] - b[i]);
}

void output()
{
	cout << sum << "\n";
}

int main()
{
	input();
	core();
	output();
	return 0;
}