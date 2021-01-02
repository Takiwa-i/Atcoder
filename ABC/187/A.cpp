#include <iostream>
#include <string>

int main(void)
{
	std::string a, b;
	int as = 0;
	int bs = 0;
	std::cin >> a >> b;
	for (int i = 0; i < 3; i++)
	{
		as += a[i] - '0';
		bs += b[i] - '0';
	}
	if (as >= bs)
		std::cout << as << std::endl;
	else
		std::cout << bs << std::endl;
	return (0);
}