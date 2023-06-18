#include <iostream>

int main()
{
	std::cout << 123 << std::endl;
	std::cout << "euler\n";

	std::cout.width(10);
	std::cout.fill('0');
	std::cout << 123 << " " << 10 << " " << 20 << std::endl;
	return 0;
}