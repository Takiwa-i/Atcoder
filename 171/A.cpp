#include <iostream>

int main(void)
{
	unsigned char c;

	std::cin >> c;
	if ('A' <= c && c <= 'Z')
		std::cout << "A\n";
	else
		std::cout << "a\n";
	return (0);
}