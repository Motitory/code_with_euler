#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	cin >> str;

	int idx = (str.length() - 1) % 3 + 1;
	for (int i = idx; i < str.length(); i += 4)
		str.insert(i, ",");

	cout << str << '\n';

	return 0;
}