#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int max;
	int ans = 0;

	std::cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if ((A[i] != A[j] && A[j] != A[k] && A[k] != A[i]) && (A[i] + A[j] > A[k]))
					++ans;
			}
		}
	}
	std::cout << ans << std::endl;
	return (0);
}