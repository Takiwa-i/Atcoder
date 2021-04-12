#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <numeric>
#include <set>

int main(void)
{
	std::vector<std::string> S(3);
	for (int i = 0; i < 3; i++)
		std::cin >> S[i];
	std::map<char, long long> MP;
	std::set<char> HEAD;	
	for (int i = 0; i < 3; i++)	
	{
		std::reverse(S[i].begin(), S[i].end());
		long long co = 1;
		if (i == 2)
			co = -1;
		for (int j = 0; j < S[i].size(); j++)
		{
			MP[S[i][j]] += co;
			co *= 10;
		}
		std::reverse(S[i].begin(), S[i].end());
		HEAD.insert(S[i][0]);
	}
	if (MP.size() > 10)
	{
		std::cout << "UNSOLVABLE" << std::endl;
		return (0);
	}
	std::vector<int> P(10);
	std::iota(P.begin(), P.end(), 0);
	do
	{
		int i = 0;
		long long total = 0;
		for (std::map<char, long long>::iterator x = MP.begin(); x != MP.end(); x++)
		{
			char c = x->first;
			long long co = x->second;
			if (P[i] == 0 && HEAD.count(c))
				total = 1e18;
			total += co * P[i];
			++i;
		}
		if (total == 0)
		{
			i = 0;
			for (std::map<char, long long>::iterator x = MP.begin(); x != MP.end(); x++)
			{
				x->second = P[i];
				i++;
			}
			for (int i = 0; i < 3; i++)
			{
				long long x = 0;
				for (int j = 0; j < S[i].size(); j++)
					x = x * 10 + MP[S[i][j]];
				std::cout << x << std::endl;
			}
			return (0);
		}
	} while (std::next_permutation(P.begin(), P.end()));
	std::cout << "UNSOLVABLE" << std::endl;
	return (0);
}
