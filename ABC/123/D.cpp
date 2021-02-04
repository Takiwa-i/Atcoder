#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int x, y, z;
	int k;
	std::cin >> x >> y >> z >> k;
	std::vector<long long> A(x, 0);
	std::vector<long long> B(y, 0);
	std::vector<long long> C(z, 0);
	for (int i = 0; i < x; i++)
		std::cin >> A[i];
	for (int i = 0; i < y; i++)
		std::cin >> B[i];
	for (int i = 0; i < z; i++)
		std::cin >> C[i];
	std::sort(A.begin(), A.end(), std::greater<long long>());
	std::sort(B.begin(), B.end(), std::greater<long long>());
	std::sort(C.begin(), C.end(), std::greater<long long>());
	std::vector<long long> AB;
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B.size(); j++)
			AB.push_back(A[i] + B[j]);
	}
	std::sort(AB.begin(), AB.end(), std::greater<long long>());
	AB.resize(k);
	std::vector<long long> Ans;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < C.size(); j++)
			Ans.push_back(AB[i] + C[j]);
	}
	std::sort(Ans.begin(), Ans.end(), std::greater<long long>());
	for (int i = 0; i < k; i++)
		std::cout << Ans[i] << std::endl;
	return (0);
}