#include <iostream>

using namespace std;

int s;
long long d;

void input()
{
	cin >> s >> d;
}

void core()
{
	long long day = 0;

	while (true)
	{
		day += s;
		if (day >= d)
			break;
		s++;
	}
	cout << s << endl;
}

int main()
{
	input();
	core();
	return 0;
}