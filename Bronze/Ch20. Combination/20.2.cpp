#include <iostream>

using namespace std;

int a[6];

void output()
{
	cout << "(";
	for (int i = 1; i <= 2; i++)
		cout << a[i] << ", ";
	cout << a[3] << ")" << "\n";
}

void core(int depth)
{
	if (depth > 3)
		output();
	else
	{
		for (int i = a[depth - 1] + 1; i <= 5; i++)
		{
			a[depth] = i;
			core(depth + 1);
		}
	}
}

int main()
{
	core(1);
	return 0;
}