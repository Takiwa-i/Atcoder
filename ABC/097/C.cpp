#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

int main(void)
{
	std::string s;
	int k;
	std::cin >> s >> k;
	std::vector<std::string> D;
	std::map<std::string, int> M;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 1; j <= k; j++)
		{
			std::string sub = s.substr(i, j);
			if (M[sub] == 0)
			{
				M[sub]++;
				D.push_back(sub);
			}
		}
	}
	std::sort(D.begin(), D.end());
	std::cout << D[k - 1] << std::endl;
	return (0);
}