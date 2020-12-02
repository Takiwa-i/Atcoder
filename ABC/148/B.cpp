#include <iostream>
#include <string>

int main(void)
{
	int n;
	std::string s, t;
	
	std::cin >> n;
	std::cin >> s >> t;
	for (int i = 0; i < n; i++)
	{
		std::cout << s[i];
		std::cout << t[i];
	}
	std::cout << std::endl;
	return (0);
}