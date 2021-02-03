#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	std::string s;
	int count_even = 0; //0101
	int count_odd = 0;  //1010
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0)
		{
			if (s[i] == '0')
				++count_odd;
			else
				++count_even;
		}
		else
		{
			if (s[i] == '0')
				++count_even;
			else
				++count_odd;
		}
	}
	std::cout << std::min(count_odd, count_even) << std::endl;
	return (0);
}