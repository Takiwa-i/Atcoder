#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	int ans = 0;
	int count = 0;
	int j;

	std::cin >> s;
	for (int i = 0; i < 3; i++)
	{
		j = i;
		while (s[j++] == 'R')
			++count;
		ans = std::max(ans, count);
		count = 0;
	}
	std::cout << ans << std::endl;
	return (0);
}