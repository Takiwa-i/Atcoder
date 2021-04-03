#include <iostream>
#include <vector>
#include <algorithm>

long long calc(long long a)
{
	long long count = 0;
	while (a % 2 == 0)
	{
		a /= 2;
		++count;
	}
	return (count);
}


int main(void)
{
	int n;
	long long total = 0;
	std::cin >> n;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		total += calc(A[i]);
	}
	std::cout << total << std::endl;
	return (0);
}