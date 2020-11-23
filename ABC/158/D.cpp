#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

int main(void)
{
	std::string s;
	std::deque<char> S;
	int rev = 1;
	int q;
	int t, f;
	char c;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
		S.push_back(s[i]);
	std::cin >> q;
	for (int i = 0; i < q; i++)
	{
		std::cin >> t;
		if (t == 1)
		{
			rev *= -1;
			continue ;	
		}
		std::cin >> f >> c;
		if (rev == 1)
		{
			if (f == 1)
				S.push_front(c);
			else if (f == 2)
				S.push_back(c);
		}
		else if (rev == -1)
		{
			if (f == 1)
				S.push_back(c);
			else if (f == 2)
				S.push_front(c);
		}
	}
	if (rev == 1)
	{
		for (std::deque<char>::iterator i = S.begin(); i != S.end(); i++)
			std::cout << *i;
		std::cout << std::endl;
	}
	else
	{
		for (std::deque<char>::iterator i = S.end() - 1; i != S.begin(); i--)
			std::cout << *i;
		std::cout << *S.begin() << std::endl;
	}
	return (0);
}