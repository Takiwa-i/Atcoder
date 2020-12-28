#include <iostream>
#include <string>
#include <map>

int main(void)
{
	std::string s;
	std::map<char, int> M;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		M[s[i]]++;
	}
	if (M.size() != 2)
	{
		std::cout << "No" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (M[s[i]] != 2)
			{
				std::cout << "No" << std::endl;
				return (0);
			}
		}
	}
	std::cout << "Yes" << std::endl;
	return (0);

}