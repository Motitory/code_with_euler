#include <iostream>
#include <algorithm>
#define N 10

using namespace std;

void prime(const int& x)
{
	int cnt = 0;
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
		{
			cnt++;
			break;
		}
	if (cnt == 0)
		cout << x << " ";
}

int a[N + 1];

int main()
{
	for (int i = 1; i <= N; i++)
		cin >> a[i];

	for_each(a + 1, a + N + 1, prime);
	cout << endl;
	return 0;
}