#include <iostream>
#include <vector>

int main(void)
{
	int n;
	long long count = 0;

	std::cin >> n;
	std::vector<int> A(n + 1, 0);
	for (int i = 1; i < n + 1; i++)
	{
		std::cin >> A[i];
		if (A[i - 1] > A[i])
		{
			count += A[i - 1] - A[i];
			A[i] = A[i - 1];
		}
	}
	std::cout << count << std::endl;
	return (0);
}