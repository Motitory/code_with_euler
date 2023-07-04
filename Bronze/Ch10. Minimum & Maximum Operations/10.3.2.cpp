#include <iostream>
#include <algorithm>
#define N 10

using namespace std;

int a[N + 1];

int main()
{
	for (int i = 1; i <= N; i++)
		cin >> a[i];
	auto* p = max_element(a + 1, a + N + 1);
	cout << *p << endl;
	cout << p - a << endl;
	return 0;
}