#include <iostream>
#include <string>

using namespace std;

int a[5];
string str = "0JQKA";

void output()
{
	cout << "(";
	for (int i = 1; i <= 2; i++)
		cout << str[a[i]] << ", ";
	cout << str[a[3]] << ")" << "\n";
}

void core(int depth)
{
	if (depth > 3)
		output();
	else
		for (int i = a[depth - 1] + 1; i <= 4; i++)
		{
			a[depth] = i;
			core(depth + 1);
		}
}

int main()
{
	core(1);
	return 0;
}