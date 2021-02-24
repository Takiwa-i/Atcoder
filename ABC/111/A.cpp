#include <iostream>
#include <string>

int main(void)
{
	std::string s;

	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
			std::cout << '9';
		else
			std::cout << '1';
	}
	std::cout << std::endl;
	return (0);
}