#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int R, M, Y;
	cin >> R >> M >> Y;

	double value = M;
	for (int i = 1; i <= Y; i++)
	{
		value *= (R * 0.01 + 1);
	}
	cout << int(trunc(value)) << '\n';

	return 0;
}