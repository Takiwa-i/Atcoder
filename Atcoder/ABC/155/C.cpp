#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

int main(void)
{
	int n;
	int most = 0;
	std::cin >> n;
	std::vector<std::string> S(n);
	std::set<std::string> set;
	std::vector<std::vector<std::string> > Occ(n + 1);
	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;
		S.at(i) = s;
		set.insert(s);
	}
	std::sort(S.begin(), S.end());
	for (std::set<std::string>::iterator i = set.begin(); i != set.end(); i++)
	{
		int n = std::upper_bound(S.begin(), S.end(), *i) - std::lower_bound(S.begin(), S.end(), *i);
		Occ[n].push_back(*i);
		most = std::max(most, n);
	}
	for (std::vector<std::string>::iterator i = Occ[most].begin(); i != Occ[most].end(); i++)
		std::cout << *i << std::endl;
	return (0);
}