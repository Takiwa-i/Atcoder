#include <iostream>
#include <string>
#include <vector>

int solve(std::string& S)
{
	int n = S.size();
	std::vector<long long> val(2019, 0);
	long long factor = 1;
	long long count = 0;
	val[count]++;
	for (int i = 0; i < n; i++)
	{
		long long add = S[n - 1 - i] - '0';
		count = (count + factor * add) % 2019;
		factor = (factor * 10) % 2019;
		val[count]++;
	}
	long long res = 0;
	for (int i = 0; i < val.size(); i++)
		res += val[i] * (val[i] - 1) / 2;
	return res;
}

int main(void)
{
	std::string S;
	std::cin >> S;
	std::cout << solve(S) << std::endl;
	return (0);
}