#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
int sumEven, sumOdd;
string str;

int main()
{
	cin >> n;

	while (n--)
	{
		cin >> str;
		if (str.length() % 2 == 0)
			sumEven++;
		else
			sumOdd++;
	}

	cout << sumEven << '\n';
	cout << sumOdd << '\n';

	return 0;
}