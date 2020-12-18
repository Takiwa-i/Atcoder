#include <iostream>

int main(void)
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if ((a == b && b != c) || (b == c && a != c) || (a == c && a != b))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}