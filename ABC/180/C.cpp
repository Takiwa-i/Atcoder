#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	long n;
	std::vector<long> A;
	
	std::cin >> n;
	for (long i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			A.push_back(i);
			if (n / i != i)
				A.push_back(n / i);
		}
	}
	std::sort(A.begin(), A.end());
	for (std::vector<long>::iterator i = A.begin(); i != A.end(); i++)
		std::cout << *i << std::endl;
	return (0);
}