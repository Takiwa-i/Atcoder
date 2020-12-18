#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	int n, k;
	std::string s;
	int ans = 0;

	std::cin >> n >> k;
	std::cin >> s;
	for (int i = 1; i < n; i++)
	{
		if (s[i - 1] == s[i])
			++ans;
	}
	std::cout << std::min(ans + 2 * k, n - 1) << std::endl;
	return (0);

}