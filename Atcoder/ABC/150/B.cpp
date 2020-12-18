#include <iostream>
#include <string>

int main(void)
{
	int n;
	int ans = 0;
	std::string s;
	
	std::cin >> n;
	std::cin >> s;
	for (int i = 0; i + 2 < n; i++)
	{
		if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}