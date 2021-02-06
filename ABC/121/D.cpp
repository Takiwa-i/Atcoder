#include <iostream>
#include <vector>

long long oddsolve(long long a)
{
	return ((a + 1) / 2 % 2);
}

long long solve(long long a)
{
	if (a % 2 == 1)
		return (oddsolve(a));
	return (oddsolve(a + 1) ^ (a + 1));
}

int main(void)
{
	long long a, b;

	std::cin >> a >> b;
	std::cout << (solve(b) ^ solve(a - 1)) << std::endl;
	return (0);
}