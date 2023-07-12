#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main()
{
	cin >> n >> str;

	str.erase(n - 1, 1);

	if (str.empty())
		cout << -1 << '\n';
	else
		cout << str << '\n';
	
	return 0;
}