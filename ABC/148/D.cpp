#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	int count = 1;
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == count)
		{
			count++;
			flag = true;
		}
	}
	if (!flag)
		std::cout << -1 << std::endl;
	else
		std::cout << A.size() - count + 1 << std::endl;
	return (0);
}