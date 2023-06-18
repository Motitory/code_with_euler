#include <iostream>

using namespace std;

int main(void)
{
	double m;
	cin >> m;

	for (int i = 0; i < 5; i++)
	{
		m *= 1.05;
		cout.precision(2);
		cout << fixed << round(m * 100) / 100.0 << endl;
	}

	return 0;
}