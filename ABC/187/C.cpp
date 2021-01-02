#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<std::string> S;
	std::map<std::string, bool> E;
	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;
		if (s[0] == '!')
			E[s] = true;
		else
			S.push_back(s);
	}
	for (std::vector<std::string>::iterator i = S.begin(); i != S.end(); i++)
	{
		if (E["!" + *i])
		{
			std::cout << *i << std::endl;
			return (0);
		}
	}
	std::cout << "satisfiable" << std::endl;
	return (0);
}