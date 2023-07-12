#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string str = "ABCDEF";

	cout << str[0] << endl;
	cout << str.at(0) << endl;
	cout << str.front() << endl;
	cout << str.back() << endl;

	const char* ptr1 = str.c_str();
	const char* ptr2 = str.data();
	printf("%s\n", ptr1);
	printf("%s\n", ptr2);
	printf("%s\n", str.c_str());
	printf("%zu\n", strlen(str.c_str()));
	return 0;
}