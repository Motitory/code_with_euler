#include <iostream>

#define N 16

using namespace std;

int n, a[N + 1];
bool check[N + 1];

void input()
{
	cin >> n;
}

bool isPrime(int num)
{
	int cnt = 0;

	for (int i = 1; i <= num; i++)
		if (num % i == 0)
			cnt++;

	return cnt == 2;
}

void output()
{
	if (isPrime(a[n] + a[1]) == true)
	{
		for (int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << '\n';
	}
}

void core(int depth)
{
	if (depth > n)
		output();
	else
		for (int i = 2; i <= n; i++)
			if (check[i] == false && isPrime(a[depth - 1] + i) == true)
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