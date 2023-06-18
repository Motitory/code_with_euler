#include <iostream>

using namespace std;

int main(void)
{
	int y, m, d;
	cin >> y >> m >> d;

	cout.width(4);
	cout.fill('0');
	cout << y << "-";

	cout.width(2);
	cout.fill('0');
	cout << m << "-";

	cout.width(2);
	cout.fill('0');
	cout << d << endl;

	return 0;
}