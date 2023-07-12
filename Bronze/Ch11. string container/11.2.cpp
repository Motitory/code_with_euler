#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "ABCDEF";
	string str2("ABCDEF");
	string str3{ "ABCDEF" };

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	string str4(str1);
	string str5(str1, 3);
	string str6(str1, 1, 3);

	cout << str4 << endl;
	cout << str5 << endl;
	cout << str6 << endl;
	return 0;
}