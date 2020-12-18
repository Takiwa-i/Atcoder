#include <iostream>
#include <vector>
#include <iomanip>

int main(void)
{
	int n;
	double p = 1.0;
	double s = 0.0;
	std::vector<int> A;

	std::cin >> n;
	A.resize(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		p *= A[i];
	}
	for (int i = 0; i < n; i++)
		s += (double)(p / A[i]);
	std::cout << std::fixed << std::setprecision(20) << (double)(p / s) << std::endl;
	return (0);
}