#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main()
{
	cin >> n;

	while (n--)
	{
		cin >> str;
		for (auto& ch : str)
			ch = toupper(ch);

		cout << str.substr(str.length() - 3) << '\n';
	}

	return 0;
}