#include <iostream>
#include <string>

int main(void)
{
	int n;
	int ans[4] = {0,0,0,0};
	std::string S;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> S;
		if (S == "AC")
			++(ans[0]);
		else if (S == "WA")
			++(ans[1]);
		else if (S == "TLE")
			++(ans[2]);
		else if (S == "RE")
			++(ans[3]);
	}
	std::cout << "AC x " << ans[0] << std::endl;
	std::cout << "WA x " << ans[1] << std::endl;
	std::cout << "TLE x " << ans[2] << std::endl;
	std::cout << "RE x " << ans[3] << std::endl;
	return (0);
}