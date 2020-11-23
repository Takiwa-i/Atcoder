#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 1;
	std::cin >> n;
	std::vector<std::string> S(n);
	for (int i = 0; i < n; i++)
		std::cin >> S[i];
	std::sort(S.begin(), S.end());	
	for (int i = 0; i < n - 1; i++)
	{
		if (S[i] != S[i + 1])
			++ans;
	}	
	std::cout << ans << std::endl;
	return (0);
}