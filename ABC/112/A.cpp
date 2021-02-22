#include <iostream>

int main(void)
{
	int n;

	std::cin >> n;
	if (n == 2)
	{
		int a, b;

		std::cin >> a >> b;
		std::cout << a + b << std::endl;
		return (0);
	}
	std::cout << "Hello World" << std::endl;
	return (0);
}