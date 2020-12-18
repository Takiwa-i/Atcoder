#include <iostream>

int main(void)
{
	long long l;
	long long ans = 1;

	std::cin >> l;
	l--;
	for (int i = 1; i <= 11; i++)
	{
		ans *= l;
		ans /= i;
		l--;
	}
	std::cout << ans << std::endl;
	return (0);
}