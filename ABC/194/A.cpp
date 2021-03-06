#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ICE 1
#define MILK 2
#define LAKT 3
#define HYOKA 4

int main(void)
{
	int a, b;
	int total;
	int ans;
	std::cin >> a >> b;
	total = a + b;
	if (total >= 15 && b >= 8)
		ans = ICE;
	else if (total >= 10 && b >= 3)
		ans = MILK;
	else if (total >= 3)
		ans = LAKT;
	else
		ans = HYOKA;
	std::cout << ans << std::endl;
	return (0);
}
