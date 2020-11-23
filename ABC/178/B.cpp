#include <iostream>
#include <algorithm>

int main(void)
{
	long long A[2];
	long long C[2];
	long long pro = -1000000000000000000;

	std::cin >> A[0] >> A[1] >> C[0] >> C[1];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			pro = std::max(pro,  A[i] * C[j]);
	}
	std::cout << pro << '\n';
	return (0);
}