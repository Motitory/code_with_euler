#include <iostream>

int main()
{
	double pi = 3.141592;

	std::cout << pi << std::endl;
	std::cout.precision(5);
	std::cout << pi << std::endl;

	pi = 3.000000;
	std::cout << pi << std::endl;
	std::cout.precision(2);
	std::cout << std::fixed << pi << std::endl;
	return 0;
}