#include <iostream>
#include <string>

int main(void)
{
	int k;
	std::string s;

	std::cin >> k >> s;
	if (s.size() <= k)
		std::cout << s << std::endl;
	else
	{
		for (int i = 0; i < k; i++)
			std::cout << s[i];
		std::cout << "...\n";
	}
	return (0);
}