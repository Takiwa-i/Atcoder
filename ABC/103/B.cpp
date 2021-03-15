#include <iostream>
#include <string>
#include <deque>

bool check(std::deque<char> Q, std::string &t)
{
	int i = 0;

	while (!Q.empty())
	{
		char c = Q.front();
		Q.pop_front();
		if (t[i] != c)
			return (false);
		++i;
	}
	return (true);
}


int main(void)
{
	std::string s, t;
	std::cin >> s >> t;
	std::deque<char> Q;
	bool flag = false;
	for (int i = 0; i < s.size(); i++)
		Q.push_back(s[i]);
	for (int count = 0; count <= s.size(); count++)
	{
		char c = Q.back();
		Q.pop_back();
		Q.push_front(c);
		if (check(Q, t))
		{
			flag = true;
			break ;
		}
	}
	if (flag)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}