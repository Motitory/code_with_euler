#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "ABCDEF";

	str.insert(3, "XYZ");	// "ABCXYZDEF"
	cout << str << endl;

	str.erase(6);					// "ABCXYZ"
	cout << str << endl;

	str.erase(0, 3);      // "XYZ"
	cout << str << endl;

	str.replace(1, 1, "ABC");  // "XABCZ"
	cout << str << endl;

	str.push_back('X'); // "XABCZX"
	cout << str << endl;

	if (!str.empty())  // "XABCZ"
		str.pop_back();
	cout << str << endl;
	return 0;
}