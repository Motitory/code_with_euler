#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str = "DEFAAA";
	string str1(str.begin(), str.end());
	string str2(str1.begin() + 1, str1.begin() + 4);

	cout << str1 << endl;
	cout << str2 << endl;

	str[4] = 'B';
	str.at(5) = 'C';
	cout << str << endl;

	sort(str.begin(), str.end());
	cout << str << endl;
	return 0;
}