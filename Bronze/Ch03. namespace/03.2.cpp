#include <iostream>

namespace aaa
{
	int x = 10;
	void apple();
}

namespace aaa
{
	int y = 20;
	void orange();
}

void aaa::apple()
{
	std::cout << "apple" << std::endl;
}

void aaa::orange()
{
	apple();
	std::cout << "orange" << std::endl;
}

int main()
{
	std::cout << aaa::x << std::endl;
	std::cout << aaa::y << std::endl;
	aaa::orange();
	return 0;
}