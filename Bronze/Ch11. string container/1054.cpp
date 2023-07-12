#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str;
char alpha;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> str;
		for (auto& ch : str)
			ch = tolower(ch);

		cin >> alpha;
		alpha = tolower(alpha);
		str.find(alpha) == string::npos ? cout << "0\n" : cout << str.find(alpha) + 1 << "\n"; 
	}

	return 0;
}