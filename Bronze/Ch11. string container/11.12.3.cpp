#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string x, str;
	int n, sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		sum += stoi(x);
		str += x;
	}

	cout << sum << endl;

	reverse(str.begin(), str.end());
	cout << str << endl;
	return 0;
}