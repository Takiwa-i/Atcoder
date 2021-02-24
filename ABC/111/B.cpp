#include <iostream>
#include <string>

bool check(int n)
{
	std::string s;
	char c;

	s = std::to_string(n);
	c = s[0];
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != c)
			return (false);
	}
	return (true);
}


int main(void)
{
	int n;
	
	std::cin >> n;
	for (int i = n;;i++)
	{
		if (check(i))
		{
			std::cout << i << std::endl;
			return (0);
		}
	}
	return (0);
}