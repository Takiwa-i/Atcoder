#include <iostream>
#include <string>

int main(void)
{
	std::string s, t, u;
	int a, b;
	std::cin >> s >> t;
	std::cin >> a >> b;
	std::cin >> u;
	if (s == u)
		--a;
	else if (t == u)
		--b;
	std::cout << a << " " << b << std::endl;
	return (0);
}