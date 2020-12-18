#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	bool flag;

	flag = true;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 != 0 && (s[i] != 'L' && s[i] != 'U' && s[i] != 'D'))
		{
			flag = false;
			break ;
		}
		else if (i % 2 == 0 && (s[i] != 'R' && s[i] != 'U' && s[i] != 'D'))
		{
			flag = false;
			break ;	
		}
	}
	if (flag)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}