#include <iostream>
#include <string>

int main(void)
{
	std::string S;
	int			num = 0;

	std::cin >> S;
	for (int i = 0; i < S.size(); i++)
		num += S[i] - '0';
	if (num % 9 == 0)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}