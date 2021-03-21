#include <iostream>
#include <string>

int main(void)
{
	std::string n;
	std::cin >> n;
	int num;
	long long x = 0;

	num = std::stoi(n);
	for (int i = 0; i < n.size(); i++)
	{
		x = x + (n[i] - '0');
	}
	if ((long long)num % x == 0)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}