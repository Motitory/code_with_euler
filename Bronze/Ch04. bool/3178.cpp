#include <iosteam>
#include <cstring>
#define N 500

using namespace std;

char a[N + 2];

void input()
{
	cin >> a + 1;
}

bool isOk(const char* str)
{
	int open = 0, close = 0;

	int n = strlen(str + 1);
	for (int i = 1; i <= n; i++)
	{
		if (str[i] == '(')
			open++;
		else
			close++;

		if (open < close)
			return false;
	}
	return open == close;
}

int main()
{
	for (int i = 1; i <= 2; i++)
	{
		input();
		if (isOk(a))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
