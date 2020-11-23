#include <iostream>

int main(void)
{
	int n;
	int ans = 0;

	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n / i; j++)
			if (n - i * j > 0)
				++ans;
	}
	std::cout << ans << '\n';
	return (0);
}