#include <iostream>

namespace
{
	int x, y;
	void setX()
	{
		x = 10;
	}
	void setY()
	{
		y = 20;
	}
}

int main()
{
	::setX();
	::setY();

	std::cout << ::x << std::endl;
	std::cout << ::y << std::endl;

	return 0;
}