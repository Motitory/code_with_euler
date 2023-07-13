#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string str;

int main()
{
	cin >> n;

	while (n--)
	{
		cin >> str;
		reverse(str.begin(), str.end());
		cout << str << '\n';
	}

	return 0;
}