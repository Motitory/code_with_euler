#include <iostream>
#include <string>

using namespace std;

string str1, str2;

int main()
{
	cin >> str1 >> str2;

	int idx = str1.find(str2);
	if (idx != -1)
		cout << str1.substr(idx) << '\n';
	else
		cout << '0' << '\n';

	return 0;
}