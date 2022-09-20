#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int C, T;
	cin >> C >> T;

	cout << int(round(double(C) / 100 * T)) << '\n';

	return 0;
}