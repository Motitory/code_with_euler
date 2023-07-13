#include <iostream>
#include <string>

using namespace std;

string str1, str2;

int main()
{
	cin >> str1 >> str2;

	if (str1 < str2)
		cout << "Negative" << '\n';
	else if (str1 > str2)
		cout << "Positive" << '\n';
	else
		cout << "Zero" << '\n';

	return 0;
}