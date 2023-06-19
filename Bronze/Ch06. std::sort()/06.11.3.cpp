#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[11];
	int k;

	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	cin >> k;

	nth_element(a + 1, a + k, a + 11, greater<>());
	
	cout << a[k] << endl;
	return 0;
}