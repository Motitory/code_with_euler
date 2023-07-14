#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
string num[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
pair <string, int> a[101];

int main()
{
	cin >> n >> m;

	for (int i = n; i <= m; i++)
	{
		int temp = i;
		string str;
		while (temp > 0)
		{
			str.insert(0, num[temp % 10]);
			temp /= 10;
		}
		a[i] = { str, i };
	}

	sort(a + n, a + m + 1);

	int cnt = 1;
	for (int j = n; j <= m; j++)
	{
		cout << a[j].second << " ";
		if (cnt % 10 == 0)
			cout << '\n';
		cnt++;
	}
	
	return 0;
}

