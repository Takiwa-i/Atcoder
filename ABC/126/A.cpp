#include <iostream>
#include <string>

int main(void)
{
	int n, k;
	std::string s;

	std::cin >> n >> k;
	std::cin >> s;
	s[k - 1] += 32;
	std::cout << s << std::endl;
	return (0);
}