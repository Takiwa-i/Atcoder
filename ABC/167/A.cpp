#include <iostream>
#include <string>

int main(void)
{
	std::string S, T;

	std::cin >> S >> T;
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (S + c == T)
		{
			std::cout << "Yes\n";
			return (0);
		}
	}
	std::cout << "No\n";
	return (0);
}