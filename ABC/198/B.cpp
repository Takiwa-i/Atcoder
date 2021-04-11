#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


bool check(std::string s)
{
	int i = 0;
	int j = s.size() - 1;
	while (i <= j)
	{
		if (s[i] != s[j])
			return (false);
		++i;
		--j;
	}
	return (true);
}

int main(void)
{
	std::string n;
	std::cin >> n;
	int i = n.size() - 1;
	while (n[i] == '0')
		--i;
	if (check(n.substr(0, i + 1)))
	{
		std::cout << "Yes" << std::endl;
		return (0);
	}
	std::cout << "No" << std::endl;
	return (0);
}