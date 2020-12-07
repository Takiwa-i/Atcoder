#include <iostream>
#include <set>

int main(void)
{
	int n;
	int ans = 0;
	std::string s;

	std::cin >> n;
	std::cin >> s;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] != s[i + 1])
			++ans;
	}
	std::cout << ans + 1 << std::endl;	
	return (0);
}