#include <iostream>

using namespace std;

long long a[41];

long long fibo(int n)
{
	if (a[n] == 0)
	{
		if (n <= 2)
			a[n] = n;
		else
			a[n] = fibo(n - 1) + fibo(n - 2) + fibo(n - 3);
	}
	return a[n];
}


int main()
{
	int n;
	cin >> n;
	cout << fibo(n) << '\n';
	return 0;
}