#include <iostream>
#include <string>

bool circle(int start, int end, std::string S)
{
	while (start <= end)
	{
		if (S[start] != S[end])
			return (false);
		start++;
		end--; 
	}
	return (true);
}

int main(void)
{
	std::string S;
	std::cin >> S;
	int n;
	n = S.size() - 1;
	if (circle(0, (n - 1) / 2, S) && circle((n + 3) / 2, n, S) && circle(0, n, S))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}