#include <iostream>

int main(void)
{
	int k, s;
	int ans = 0;
	std::cin >> k >> s;
	for (int x = 0; x <= k; x++)
	{
		for (int y = 0; y <= k; y++)
		{
			int z = s - x - y;
			if (z >= 0 && z <= k)
				++ans;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}