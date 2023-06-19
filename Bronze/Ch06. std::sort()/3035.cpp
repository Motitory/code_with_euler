#include <iostream>
#include <algorithm>
#define N 20000

using namespace std;

int n, b;
int a[N + 1];

void input()
{
	cin >> n >> b;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void core()
{
	sort(a + 1, a + n + 1, greater<>());
}

void output()
{
	int i = 1;
	while (b > 0)
	{
		b -= a[i];
		i++;
	}
	cout << i - 1 << "\n";
}

int main()
{
	input();
	core();
	output();
	return 0;
}