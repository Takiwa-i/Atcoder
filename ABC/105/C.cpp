#include <iostream>
#include <string>
int main(void)
{
	int n;
	std::cin >> n;
	std::string ans = "";
	while (n != 0)
	{
		if (n % 2 != 0)
		{
			n--;
			ans = "1" + ans;
		}
		else
			ans = "0" + ans;
		n /= -2;
	}
	if (ans == "")
		ans = "0";
	std::cout << ans << std::endl;
	return (0);
}
