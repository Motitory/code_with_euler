#include <iostream>

using namespace std;

int main()
{
	int x1, x2, y1, y2, x, y;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x >> y;

	bool b1 = x1 <= x && x <= x2;
	bool b2 = y1 <= y && y <= y2;

	cout << boolalpha << (b1 && b2) << endl;
	return 0;
}