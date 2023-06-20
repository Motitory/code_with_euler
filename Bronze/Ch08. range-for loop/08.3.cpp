#include <iostream>

using namespace std;

void output1(const int& num)
{
	cout << num << " ";
}

void output2(const int& num)
{
	cout << num * num << " ";
}

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(int) - 1;

	for_each_n(a + 1, 3, output1);
	cout << endl;

	for_each_n(a + 1, 3, output2);
	cout << endl;

	return 0;
}