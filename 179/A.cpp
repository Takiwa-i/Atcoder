#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	
	std::cin >> s;
	if (s[s.length() - 1] == 's')
		std::cout << s << "es\n";
	else
		std::cout << s << "s\n";
	return (0);
}