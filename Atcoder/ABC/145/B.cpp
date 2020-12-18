#include <iostream>
#include <string>

int main(void)
{
	int n;
	std::string s;

	std::cin >> n;
	std::cin >> s;

	if (n % 2 == 1||(s.substr(0, n / 2) != s.substr(n / 2, n / 2)))
		std::cout << "No\n";
	else
		std::cout << "Yes\n";
	return (0);
}
