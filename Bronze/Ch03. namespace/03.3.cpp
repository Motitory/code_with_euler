#include <iostream>

int x;
void setX()
{
	int x;
	::x = 10;
}

namespace aaa
{
	int x;
	void setX()
	{
		x = 20;
	}
	namespace bbb
	{
		int x;
		void setX()
		{
			x = 30;
		}
	}
}

int main()
{
	::setX();
	aaa::setX();
	aaa::bbb::setX();

	namespace a = aaa;
	namespace ab = aaa::bbb;

	std::cout << ::x << std::endl;
	std::cout << a::x << std::endl;
	std::cout << ab::x << std::endl;

	return 0;
}