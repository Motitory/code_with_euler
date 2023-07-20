#include <iostream>

#define N 10

using namespace std;

int n, a[N + 1], b[N + 1];
bool check[N + 1];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void output()
{
	for (int i = 1; i <= n; i++)
		if (check[i] == true)
			cout << a[i] << ' ';

	for (int i = n; i >= 1; i--)
		if (check[i] == false)
			cout << a[i] << ' ';
	
	cout << '\n';
}

void core(int depth)
{
	if (b[depth - 1] == n)
		output();
	else
		for (int i = b[depth - 1] + 1; i <= n; i++)
		{
			b[depth] = i;
			check[i] = true;
			core(depth + 1);
			check[i] = false;
		}
}


int main()
{
	input();
	core(1);
	return 0;
}
