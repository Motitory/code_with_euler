#include <iostream>

using namespace std;

int a[4];

void output()
{
	int sum = 0;

	for (int i = 1; i <= 3; i++)
		sum += a[i];

	if (sum == 10)
	{
		cout << "(";
		for (int i = 1; i <= 2; i++)
			cout << a[i] << ", ";
		cout << a[3] << ")" << "\n";
	}
}

void core(int depth)
{
	if (depth > 3)
		output();
	else
		for (int i = a[depth - 1] + 1; i <= 10; i++)
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