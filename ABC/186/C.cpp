#include <iostream>
#include <string>
#include <vector>

bool check_d(int n)
{
	while (n > 0)
	{
		if (n % 10 == 7)
			return (true);
		n /= 10;
	}
	return (false);
}

bool check(int n)
{
	while (n > 0)
	{
		if (n % 8 == 7)
			return (true);
		n /= 8;
	}
	return (false);
}


int main(void)
{
	int n, ans;

	ans = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (check(i) || check_d(i))
			++ans;
	}
	std::cout << n - ans << std::endl;
	return (0);
}