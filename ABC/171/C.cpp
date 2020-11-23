#include <iostream>
#include <string>
#include <algorithm>

void put_str(unsigned long n)
{
	std::string S = "";
	while (n > 0)
	{
		--n;
		S += (char)('a' + n % 26);
		n /= 26;		
	}
	std::reverse(S.begin(), S.end());
	std::cout << S << std::endl;
}

int main(void)
{
	unsigned long n; 

	std::cin >> n;
	put_str(n);
	return (0);
}