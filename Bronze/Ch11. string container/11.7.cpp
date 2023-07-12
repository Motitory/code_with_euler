#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "ABCDEF";

	cout << str.size() << endl;
	cout << str.length() << endl;
	cout << str.capacity() << endl;

	int len = str.length();
	for (int i = 0; i < len; i++)
		cout << str[i];
	cout << endl;

	str.reserve(1000);;
	cout << str.capacity() << endl;
	cout << str.max_size() << endl;

	str.shrink_to_fit();
	cout << str.capacity() << endl;

	str.resize(3);
	cout << str << endl;

	str.resize(6, 'A');
	cout << str << endl;

	str.clear();
	cout << str.size() << endl;
	cout << boolalpha << str.empty() << endl;
	return 0;
}