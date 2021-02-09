#include <iostream>
#include <string>

int main(void)
{
	std::string s;

	std::cin >> s;
	int year = 0;
	int month = 0;
	int day = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '/')
			continue ;
		if (i < 4)
			year = 10 * year + (s[i] - '0');
		else if (i < 7)
			month = 10 * month + (s[i] - '0');
		else
			day = 10 * day + (s[i] - '0');
	}
	if (year == 2019 && month == 4 && day <= 30)
		std::cout << "Heisei" << std::endl;
	else if (year <= 2019 && month <= 3)
		std::cout << "Heisei" << std::endl;
	else
		std::cout << "TBD" << std::endl;
	return (0);
}