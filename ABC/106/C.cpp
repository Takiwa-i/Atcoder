#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	std::string s;
	long long k;
	long long count = 0;
	std::cin >> s >> k;
	int i = 0;
	while (s[i] == '1')
		++i;
	if (i + 1 > k)
	{
		std::cout << 1 << std::endl;
		return (0);
	}
	else
		std::cout << s[i] << std::endl;
	return (0);
}