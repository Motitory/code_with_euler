#include <iostream>
#include <string>

using namespace std;

string str1, str2;

int main()
{
	cin >> str1 >> str2;
	cout << str1 << ", " << str2 << '\n';
	
	swap(str1, str2);

	cout << str1 << ", " << str2 << '\n';

	return 0;
}