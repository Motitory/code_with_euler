#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str, temp;
int n, cnt;

int main()
{
	cin >> n;

	while (n--)
	{
		cin >> str;
		for (auto& ch : str)
				ch = toupper(ch);
		temp = str;
		reverse(temp.begin(), temp.end());
		if (str == temp)
		{
			cout << str << '\n';
			cnt++;
		}	
	}

	if (cnt == 0)
		cout << "NOT FOUND" << '\n';

	return 0;
}