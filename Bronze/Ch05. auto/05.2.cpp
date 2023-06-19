#include <iostream>

using namespace std;

auto add(double x, double y) -> int
{
	return x + y;
}

int main()
{
	cout << add(10.3, 20.1) << endl;
	return 0;
}