#include <iostream>

#define N 10

using namespace std;

int n, a[N + 1], check[N + 1], cnt;
string s = "0123456789A";

void input()
{
	cin >> n;
}

void output()
{
	cnt++;
	for (int i = 1; i <= n; i++)
		cout << s[a[i]];
	cout << '\n';
}

void core(int depth)
{
	if (depth > n)
		output();
	else
	{
		if (depth % 2)
		{
			for (int i = 1; i <= n; i++)
			{
				if (check[i] == false && a[depth - 1] > i)
				{
					a[depth] = i;
					check[i] = true;
					core(depth + 1);
					check[i] = false;
				}
			}
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				if (check[i] == false && a[depth - 1] < i)
				{
					a[depth] = i;
					check[i] = true;
					core(depth + 1);
					check[i] = false;
				}
			}
		}
	} 
}

int main()
{
	input();
	a[0] = n + 1;
	core(1);
	cout << cnt << '\n';
	return 0;
}