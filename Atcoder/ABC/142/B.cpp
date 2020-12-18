#include <iostream>

int main(void)
{
	int n, k;
	int ans = 0;
	int h;

	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> h;
		if (h >= k)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}