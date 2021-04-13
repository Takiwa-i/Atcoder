#include <iostream>
#include <string>
#include <set>

int check(std::string &s, int i)
{
	std::set<char> kind;
	for (int x = 0; x < i; x++)
	{
		for (int y = i; y < s.size(); y++)
		{
			if (s[x] == s[y])
				kind.insert(s[x]);
		}
	}
	return ((int)kind.size());
}

int main(void)
{
	int n;
	int ans = 0;
	std::string s;
	std::cin >> n >> s;
	for (int i = 1; i < n; i++)
		ans = std::max(ans, check(s, i));
	std::cout << ans << std::endl;
	return (0);
}