#include <iostream>
#include <string>

int main(void)
{
	int a;
	std::string s;

	std::cin >> a;
	std::cin >> s;
	if (a >= 3200)
		std::cout << s << std::endl;
	else
		std::cout << "red" << std::endl;
	return (0);
}