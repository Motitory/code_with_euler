#include <iostream>
#include <string>

using namespace std;

string str, res;

int main()
{
	cin >> str;

	for (const auto& ch : str)
	{
		int idx = string("CAMBRIDGE").find(ch);
		if (idx == -1)
			res.push_back(ch);
	}

	cout << res << '\n';

	return 0;
}