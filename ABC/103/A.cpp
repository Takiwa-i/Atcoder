#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	std::vector<int> A(3);
	int ans = 100000;
	for (int i = 0; i < 3; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	std::cout << abs(A[1] - A[0]) + abs(A[2] - A[1]) << std::endl;
	return (0);
}