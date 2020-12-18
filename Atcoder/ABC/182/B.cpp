#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	std::vector<int> A;
	int most = 0;
	int count = 0;
	int ans;

	std::cin >> n;
	A.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	for (int i = 2; i <= 1000; i++)
	{
		count = 0;
		for (std::vector<int>::iterator k = A.begin(); k != A.end(); k++)
		{
			if (*k % i == 0)
				++count;
		}
		if (count >= most)
		{
			most = count;
			ans = i;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}