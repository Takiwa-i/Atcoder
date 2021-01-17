#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<std::pair<std::pair<std::string, int>, int> > A(n);
	for (int i = 0; i < n; i++)
	{
		std::string s;
		int p;
		std::cin >> s >> p;
		A[i].first = std::make_pair(s, -p);
		A[i].second = i + 1;
	}
	std::sort(A.begin(), A.end());
	for (int i = 0; i < n; i++)
		std::cout << A[i].second << std::endl;
	return (0);
}