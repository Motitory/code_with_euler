#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;

int main()
{
	cin >> a >> b >> c;
	cout << min(a, min(b, c)) << endl;
	cout << max(a, max(b, c)) << endl;
	return 0;
}