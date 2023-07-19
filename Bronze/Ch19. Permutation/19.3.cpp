#include <iostream>
#include <string>

using namespace std;

int a[4];
bool check[4];
string card = "JQKA";

void output()
{
	cout << "(";

	for (int i = 1; i <= 2; i++)
		cout << card[a[i]] << ", ";
	cout << card[a[3]] << ")" << "\n";
}

void core(int depth)
{
	if (depth > 3)
		output();
	else
	{
		for (int i = 0; i <= 3; i++)
		{
			if (check[i] == false)
			{
				a[depth] = i;
				check[i] = true;
				core(depth + 1);
				check[i] = false;
			}
		}
	}
}

int main()
{
	core(1);
	return 0;
}