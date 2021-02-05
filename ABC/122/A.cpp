#include <iostream>

int main(void)
{
	char c;
	char ans;

	std::cin >> c;
	if (c == 'A')
		ans = 'T';
	else if (c == 'C')
		ans = 'G';
	else if (c == 'T')
		ans = 'A';
	else
		ans = 'C';
	std::cout << ans << std::endl;
	return (0);
}