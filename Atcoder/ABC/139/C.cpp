#include <iostream>
#include <algorithm>

int main(void)
{
	int n;
	int h;
	int prev = 0;
	int ans = 0;
	int count = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> h;
		if (prev < h)
		{
			ans = std::max(ans, count);
			count = 0;
		}
		else if (prev >= h)
			++count;
		prev = h;
	}
	ans = std::max(ans, count);
	std::cout << ans << std::endl;
	return (0);
}