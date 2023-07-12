#include <iostream>
#include <string>

using namespace std;

int main()
{
	const char* str = "ABCDEF";

	string str1(str);
	string str2(str, 4);
	string str3(str + 1, str + 5);
	string str4(4, 'A');

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	return 0;
}