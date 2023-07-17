#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> S;

	S.push(3);
	S.push(8);
	S.push(5);

	int v = S.top();
	cout << v << '\n';

	S.pop();
	cout << S.top() << '\n';

	int cnt = S.size();
	cout << cnt << '\n';

	if (!S.empty())
		S.pop();
	return 0;
}