#include <iostream>

int main(void)
{
	int s, w;
	std::cin >> s >> w;
	if (w >= s)
		std::cout << "unsafe\n";
	else
		std::cout << "safe\n";
	return (0);
}