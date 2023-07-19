#include <iostream>

using namespace std;

int n;

int main()
{
	cin >> n;

	int m = 0;

	while (true)
	{
		m++;
		int city = n;
		int p = n;

		while (city > 1)
		{
			if (p == 1)
				break;
			city--;
			p = (p - 1 + m - 1) % city + 1;
		}

		if (city == 1)
		{
			cout << m << '\n';
			break;
		}
	}

	return 0;
}