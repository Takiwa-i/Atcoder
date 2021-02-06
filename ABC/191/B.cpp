#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int n;
	long long x;
	std::cin >> n >> x;
	std::vector<long long> A;
	for (int i = 0; i < n; i++)
	{
		long long a;
		std::cin >> a;
		if (a != x)
			A.push_back(a);
	}
	for (int i = 0; i < A.size(); i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
	return (0);
}