#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "ABCE";
	string str2 = "BCDE";
	char a[10];

	str1.copy(a, 3);
	a[3] = '\0';
	cout << a << endl;

	cout << str1.compare(str2) << endl;
	cout << str1.compare(1, 2, str2, 0, 2) << endl;

	str1.swap(str2);
	cout << str1 << endl;
	cout << str2 << endl;
	return 0;
}