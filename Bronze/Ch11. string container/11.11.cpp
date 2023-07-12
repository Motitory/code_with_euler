#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = to_string(12345);
	string str2 = to_string(3.141592);
	string str3 = to_string(123456789012345);
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	int i = stoi(str1);
	double d = stod(str2);
	long long ll = stoll(str3);
	cout << i << endl;
	cout << d << endl;
	cout << ll << endl;

	string str = "abcdef";
	for (auto& x : str)
		x = toupper(x);
	cout << str << endl;

	for (auto& x : str)
		x = tolower(x);
	cout << str << endl;
	return 0;
}