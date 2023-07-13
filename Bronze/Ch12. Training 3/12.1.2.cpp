#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	cin >> str;
	reverse(str.begin(), str.end());
	cout << str << endl;

	return 0;
} 
