#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n;
	
	std::cin >> n;
	long long ans = 0;
	std::vector<std::vector<long long> > N(10, std::vector<long long>(10, 0));
	for (int i = 1; i <= n; i++)
	{
		std::string s = std::to_string(i);
		char head = s[0];
		char tail = s[s.size() - 1];
		if (head == '0' || tail == '0')
			continue ;
		++N[head - '0'][tail - '0'];
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			ans += N[i][j] * N[j][i];
	}
	std::cout << ans << std::endl;
	return (0);
}