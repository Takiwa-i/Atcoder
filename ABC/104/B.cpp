#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	std::cin >> s;
	int count = 0;
	bool flag = false;
	if (s[0] == 'A')
	{
		s[0] = 'a';
		for (int i = 2; i <= s.size() - 2; i++)
		{
			if (s[i] == 'C')
			{
				s[i] = 'c';
				++count;
			}
		}
		if (count == 1)
		{
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] < 'a' || s[i] > 'z')
				{
					std::cout << "WA\n";
					return (0);
				}
			}
			flag = true;
		}
	}
	if (flag)
		std::cout << "AC\n";
	else
		std::cout << "WA\n";
	return 0;
}