#include <iostream>
#include <algorithm>

#define N 100000

using namespace std;

int n, k, temp;
int a[N + 1];
string str;

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> str;
	cin >> k;
}

void core()
{
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= k; i++)
	{
		cin >> temp;
		cout << a[temp] << "\n";
	}
}

int main()
{
	input();
	core();
	return 0;
}