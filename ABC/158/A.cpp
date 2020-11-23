#include <iostream>
#include <string>

int main(void)
{
	std::string S;
	std::cin >> S;
	if (S == "AAA" || S == "BBB")
		std::cout << "No\n";
	else
		std::cout << "Yes\n";
	return (0);
}