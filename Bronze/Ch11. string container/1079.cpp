#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	cin >> str;

	for (char i = 'Z'; i >= 'A'; i--)
	{
		int idx = str.find(i);
		if (idx != -1)
		{
			str.erase(idx, 1);
			cout << str << '\n';
		}
	}

	return 0;
}