#include <iostream>

using namespace std;

int a[5];
bool check[5];

void output()
{
	cout << "(";
	for (int i = 1; i <= 3; i++)
		cout << a[i] << ", ";
	cout << a[4] << ")" << '\n';
}

void core(int depth)
{
	if (depth > 4)
		output();
	else
		for (int i = 2; i <= 4; i++)
			if (check[i] == false)
			{
				a[depth] = i;
				check[i] = true;
				core(depth + 1);
				check[i] = false;
			}
}

int main()
{
	a[1] = 1;
	check[1] = true;
	core(2);
	return 0;
}