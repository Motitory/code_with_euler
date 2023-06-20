#include <iostream>
#include <algorithm>
#define N 100

using namespace std;

int r, c, a, b;
bool s1[N + 1], s2[N + 1];

void input()
{
	cin >> r >> c;
	cin >> a >> b;

	for (int i = 1; i <= c; i++)
		for (int j = 1; j <= b; j++)
		{
			if (i % 2 == 1)
				s1[(i - 1) * b + j] = true;
			else
				s2[(i - 1) * b + j] = true;
		}
}

void output(const bool& x)
{
	if (x == true)
		cout << "X";
	else
		cout << ".";
}

void core()
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i % 2 == 1)
				for_each(s1 + 1, s1 + c * b + 1, output);
			else
				for_each(s2 + 1, s2 + c * b + 1, output);
			cout << endl;
		}
	}
}

int main()
{
	input();
	core();
	return 0;
}