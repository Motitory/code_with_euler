#include <iostream>

namespace aaa
{
	int x = 10;
	void func()
	{
		std::cout << "AAA" << std::endl;
	}
}

namespace bbb
{
	int x = 20;
	void func()
	{
		std::cout << "BBB" << std::endl;
	}
}

int main()
{
	std::cout << aaa::x << std::endl;
	aaa::func();
	std::cout << bbb::x << std::endl;
	bbb::func();
	return 0;
}