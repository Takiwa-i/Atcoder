#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	std::string s;
	std::cin >> s;
	bool diff = true;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0)
		{
			if (s[i] > 'z' || s[i] < 'a')
			{
				diff = false;
				break ;
			}
		}
		else
		{
			if (s[i] > 'Z' || s[i] < 'A')
			{
				diff = false;
				break ;
			}
		}
	}	
	if (diff)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}