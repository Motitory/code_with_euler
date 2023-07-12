#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		char ch = str.front();
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			cout << str << "euler" << '\n';
		else
			cout << str.substr(1) << ch << "edu" << "\n";
	}

	return 0;
}