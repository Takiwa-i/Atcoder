#include <iostream>

int main(void)
{
	int n;
	int ans = 0;

	std::cin >> n;
	for (int i = 1; i < n; i++)
	{
		++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}