#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "DEF";
	cout << str << endl;

	str = "ABC";		// str.assign("ABC");
	cout << str << endl;

	str += "DEF";		// str.append("DEF");
	cout << str << endl;

	str = string("ABC") + string("EDF");
	cout << str << endl;

	string str1 = "ABC";
	string str2 = "ABCD";
	cout << boolalpha << (str1 < str2) << endl;
	cout << (str1 > str2) << endl;
	cout << (str1 <= str2) << endl;
	cout << (str1 >= str2) << endl;
	cout << (str1 == str2) << endl;
	cout << (str1 != str2) << endl;
	return 0;
}