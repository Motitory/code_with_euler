#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int x;
	for (int i = 1; i <= N; i++)
	{
		cin >> x;
		cout << int(round(x / 100.0) * 100) << " " << int(trunc(x / 100.0) * 100) << '\n';
	}

	return 0;
}