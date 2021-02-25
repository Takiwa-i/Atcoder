#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define YES "Yes"
#define NO "No"

int main(void)
{
	std::string s, t;

	std::cin >> s >> t;
	std::vector<int> Start(26, -1);
	std::vector<int> Goal(26, -1);
	for (int i = 0; i < s.size(); i++)
	{
		int a = s[i] - 'a';
		int b = t[i] - 'a';
		if (Start[a] != -1 || Goal[b] != -1)
		{
			if (Start[a] != b || Goal[b] != a)
			{
				std::cout << NO << std::endl;
				return (0);
			}
		}
		else{
			Start[a] = b;
			Goal[b] = a;
		}
	}
	std::cout << YES << std::endl;
	return (0);
}