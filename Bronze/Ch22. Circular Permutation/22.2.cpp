#include <iostream>

#define N 8

using namespace std;

int n, a[N + 1];
bool check[N + 1];

void input()
{
	cin >> n;
}

void output()
{
	cout << "(";
	for (int i = 1; i <= n - 1; i++)
		cout << a[i] << ", ";
	cout << a[n] << ")" << '\n';
}

void core(int depth)
{
	if (depth > n)
		output();
	else
		for (int i = 2; i <= n; i++)
			if (check[i] == false && depth % 2 == i % 2)
			{
				a[depth] = i;
				check[i] = true;
				core(depth + 1);
				check[i] = false;
			}
}

int main()
{
	input();
	a[1] = 1;
	check[1] = true;
	core(2);
	return 0;
}