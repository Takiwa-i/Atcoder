#include <iostream>
#include <string>

void	change(int n, int k, std::string &s)
{
	const char dec[] = "0123456789";
	if (n < k)
		s.push_back(dec[n]);
	else
	{
		change(n / k, k, s);
		s.push_back(dec[n % k]);
	}
}

int		main(void)
{
	int n, k;
	std::cin >> n >> k;
	std::string s;
	change(n, k, s);
	std::cout << s.size() << std::endl;
	return (0);
}