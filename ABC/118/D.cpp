#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void chmax(std::string &a, std::string b)
{
	if (a == "-")
		a = b;
	else if (a.size() < b.size())
		a = b;
	else if (a.size() == b.size())
	{
		if (a < b)
			a = b;
	}
}


int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> A(m);
	int cost[9] = {2, 5, 5, 4, 5, 6, 3, 7, 6};
	for (int i = 0; i < m; i++)
		std::cin >> A[i];
	std::vector<std::string> DP(11000);
	for (int i = 0; i < DP.size(); i++) 
		DP[i] = "-";
	DP[0] = "";
	for (int i = 0; i <= n; i++)
	{
		if (DP[i] == "-")
			continue;
		for (int j = 0; j < m; j++)
		{
			int a = A[j];
			chmax(DP[i + cost[a - 1]], DP[i] + (char)('0' + a));
		}
	}
	std::cout << DP[n] << std::endl;
	return (0);
}