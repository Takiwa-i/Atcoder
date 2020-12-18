#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<std::pair<int, int> > A(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i].first;
		A[i].second = i;
	}
	std::sort(A.begin(), A.end());
	for (int i = 0; i < n; i++)
		std::cout << A[i].second + 1 << " ";
	std::cout << std::endl;
	return (0);
}