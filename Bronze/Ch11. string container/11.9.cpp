#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "ABCABCABC";

	cout << str.find('C') << endl;
	cout << str.find("BC") << endl;
	cout << str.rfind('C') << endl;
	cout << str.rfind("BC") << endl;
	cout << str.substr(2) << endl;
	cout << str.substr(2, 3) << endl;
	return 0;
}