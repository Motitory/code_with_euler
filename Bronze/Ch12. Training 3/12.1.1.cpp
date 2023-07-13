#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	cin >> str;
	if (str.length() % 2 == 0)
		cout << "even" << '\n';
	else
		cout << "odd" << '\n';

	return 0;
}