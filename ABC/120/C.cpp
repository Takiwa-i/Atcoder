#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	std::string s;

	std::cin >> s;
	int one = 0;
	int zero = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
			++zero;
		else
			++one;
	}
	std::cout << s.size() - abs(one - zero) << std::endl;
	return (0);
}