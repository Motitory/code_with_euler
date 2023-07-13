#include <iostream>
#include <string>

using namespace std;

int x, y;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> x >> y;

		if (x < y)
			cout << "NO BRAINS" << '\n';
		else
			cout << "MMM BRAINS" << '\n';
	}

	return 0;
}