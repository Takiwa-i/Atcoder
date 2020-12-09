#include <iostream>
#include <string>

int main(void)
{
	std::string s;

	std::cin >> s;
	if (s[0] == 'S')
		std::cout << "Cloudy" << std::endl;
	else if (s[0] == 'C')
		std::cout << "Rainy" << std::endl;
	else
		std::cout << "Sunny" << std::endl;
	return (0);
}