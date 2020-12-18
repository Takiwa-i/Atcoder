#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '7')
		{
			std::cout << "Yes\n";
			return (0);
		}	
	}
	std::cout << "No\n";
	return (0);
}