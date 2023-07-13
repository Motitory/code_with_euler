#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	cin >> str;

	for (int i = 0; i < str.length(); i++)
		cout << str.substr(i) << '\n';

	return 0;
}