#include <iostream>
#include <vector>

int main(void)
{
	int n, m;
	int count, total;
	count = 0;
	total = 0;
	std::cin >> n >> m;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		total += A[i];
	}
	for (std::vector<int>::iterator i = A.begin(); i != A.end(); i++)
	{
		if (*i * (4 * m) >= total)
			++count;
	}
	if (count >= m)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}