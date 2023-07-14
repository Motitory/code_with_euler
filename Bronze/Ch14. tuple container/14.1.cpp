#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
	tuple<int, int, string> t;

	t = { 10, 20, "euler" };
	cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';

	int x, y;
	string s;

	t = make_tuple(30, 40, "weasley");
	tie(x, y, s) = t;
	cout << x << " " << y << " " << s << '\n';
	return 0;
}