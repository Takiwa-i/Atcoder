#include <iostream>
#include <string>

int main(void)
{
	int n;
	std::string s;
	const char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char 	c;
	std::cin >> n;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		c = (char)(s[i] + n);
		if (c > 'Z')
			std::cout << a[c - 'Z' - 1];
		else
			std::cout << c;
	}
	std::cout << std::endl;
	return (0);
}