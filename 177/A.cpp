#include <iostream>

int main(void)
{
	int d, t, s;

	std::cin >> d >> t >> s;
	if (t * s >= d)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}