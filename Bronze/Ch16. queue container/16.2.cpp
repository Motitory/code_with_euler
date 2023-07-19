#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> Q;

	Q.push(3);
	Q.push(8);
	Q.push(5);

	int v1 = Q.front();
	int v2 = Q.back();
	cout << v1 << '\n';
	cout << v2 << '\n';

	Q.pop();
	cout << Q.front() << '\n';
	cout << Q.back() << '\n';

	int cnt = Q.size();
	cout << cnt << '\n';

	if (!Q.empty())
		Q.pop();
	return 0;
}