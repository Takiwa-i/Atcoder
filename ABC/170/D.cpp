#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(void)
{
	int n;
	int m;
	
	std::cin >> n;
	std::vector<int> A(n);
	std::vector<bool> P(1000001, true);
	std::map<int, int> M;	
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	for (int i = 0; i < n; i++)
	{
		M[A[i]]++;
		if (P[A[i]])
		{
			for (int j = 2 * A[i]; j <= A[n - 1]; j += A[i])
				P[j] = false;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (P[A[i]] && M[A[i]] == 1)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}