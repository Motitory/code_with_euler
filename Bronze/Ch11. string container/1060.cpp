#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	cin >> str;

	int koi = 0, ioi = 0, len = str.length();

	for (int i = 0; i <= len - 3; i++)
	{
		if (str.substr(i, 3) == string("KOI"))
			koi++;
		else if (str.substr(i, 3) == string("IOI"))
			ioi++;
	}

	cout << koi << '\n';
	cout << ioi << '\n';

	return 0;
}