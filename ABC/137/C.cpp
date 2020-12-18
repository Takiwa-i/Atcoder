#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main(void)
{
	int n;
	long long ans = 0;
	std::cin >> n;
	std::map<std::string, int> M;
	std::string s;
	for (int i = 0; i < n; i++)
	{
		std::cin >> s;
		std::sort(s.begin(), s.end());
		M[s]++;
	}
	for (std::map<std::string, int>::iterator i = M.begin(); i != M.end(); i++)
	{
		long long v = (*i).second;
		ans += (v * (v - 1)) / 2;
	}
	std::cout << ans << std::endl;
	return (0);
}