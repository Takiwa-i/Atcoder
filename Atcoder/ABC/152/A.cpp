#include <iostream>

int main(void)
{
	int n, m;
	
	std::cin >> n >> m;
	if (n == m)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}