#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	std::string x;
	std::cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '.')
			break ;
		std::cout << x[i];
	}
	std::cout << std::endl;
	return (0);
}