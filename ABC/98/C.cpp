#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans;
	std::string s;
	std::cin >> n >> s;
	ans = n;
	std::vector<int> W(n, 0);
	std::vector<int> E(n, 0);
	for (int i = 0; i < n; i++)
	{
		if (i == 0)	
			continue ;
		if (s[i - 1] == 'W')
			W[i] = W[i - 1] + 1;
		else
			W[i] = W[i - 1];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (i == n - 1)	
			continue ;
		if (s[i + 1] == 'E')
			E[i] = E[i + 1] + 1;
		else
			E[i] = E[i + 1];
	}
	for (int i = 0; i < n; i++)
	{
		ans = std::min(ans, W[i] + E[i]);
	}
	std::cout << ans << std::endl;
	return (0);
}