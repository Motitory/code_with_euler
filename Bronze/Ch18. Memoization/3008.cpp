#include <iostream>

using namespace std;

#define N 40

int a[N + 1];

int fibo(int x)
{
	if (a[x] == 0)
	{
		if (x <= 1)
			a[x] = x;
		else
			a[x] = fibo(x - 1) + fibo(x - 2);
	}
	return a[x];
}

int main()
{
	int n;
	cin >> n;
	cout << fibo(n) << '\n';
	return 0;	
}