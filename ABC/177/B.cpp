#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	std::string s, t;
	int			count;
	int 		ans;

	std::cin >> s >> t;
	ans = t.size();
	for (int i = 0; i <= s.size() - t.size(); i++)
	{
		count = 0;
		for (int j = 0; j < t.size(); j++)
		{
			if (t[j] != s[i + j])
				++count;
		}
		ans = std::min(ans, count);
	}
	std::cout << ans << std::endl;
	return (0);
}