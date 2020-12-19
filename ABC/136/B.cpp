#include <iostream>
#include <string>

int main(void)
{
	int n;
	int ans = 0;

	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (std::to_string(i).size() % 2 == 1)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}