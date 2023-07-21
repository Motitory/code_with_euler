#include <iostream>

using namespace std;

int a[4];

void output(int sum)
{
	if (sum == 10)
	{
		cout << "(";
		for (int i = 1; i <= 2; i++)
			cout << a[i] << ", ";
		cout << a[3] << ")" << "\n";
	}
}

void core(int depth, int sum)
{
	if (depth > 3)
		output(sum);
	else
		for (int i = a[depth - 1] + 1; i <= 10; i++)
		{
			if (sum + i > 10)
				return;
			a[depth] = i;
			core(depth + 1, sum + i);
		}
}

int main()
{
	core(1, 0);
	return 0;
}