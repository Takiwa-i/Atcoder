#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int a;
	std::cin >> n;
	std::vector<int> A(n, 0);
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> a;
		A[a - 1]++;
	}
	for (std::vector<int>::iterator i = A.begin(); i != A.end(); i++)
		std::cout << *i << std::endl;
	return (0);
}