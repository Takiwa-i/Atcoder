#include <iostream>
#include <string>

int main(void)
{
	int n, x;
	std::string s;

	std::cin >> n >> x;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'o')
			++x;
		if (s[i] == 'x' && x > 0)
			--x;
	}
	std::cout << x << std::endl;
	return (0);
}