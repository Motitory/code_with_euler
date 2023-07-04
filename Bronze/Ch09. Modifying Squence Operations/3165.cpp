#include <iostream>
#include <algorithm>
#define N 5
using namespace std;

int a[N + 1];

void input()
{
	for (int i = 1; i <= N; i++)
		cin >> a[i];
}

void output(const int& x)
{
	cout << x << ' ';
}

void core()
{
	for (int i = 1; i <= N - 1; i++)
		for(int j = 1; j <= N - 1; j++)
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				for_each(a + 1, a + N + 1, output);
				cout << endl;
			}
}

int main()
{
	input();
	core();
	return 0;
}