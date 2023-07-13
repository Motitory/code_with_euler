#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	cin >> str;

	string y = str.substr(0, 4);
	string m = str.substr(4, 2);
	string d = str.substr(6, 2);

	cout << y << '-' << m << '-' << d << '\n';

	return 0;
}