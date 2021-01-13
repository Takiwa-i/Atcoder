#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int score(char c, int r, int s, int p)
{
	if (c == 'r')
		return (p);
	if (c == 's')
		return (r);
	return (s);
}

int main(void)
{
	int n, k;
	int r, s, p;
	int ans = 0;
	std::string t;
	
	std::cin >> n >> k;
	std::cin >> r >> s >> p;
	std::cin >> t;
	std::vector<char> P(k, 'n');
	for (int i = 0; i < t.size(); i++)
	{
		if (P[i % k] == 'n')
		{
			P[i % k] = t[i];
			ans += score(t[i], r, s, p);
		}
		else if (P[i % k] != t[i])
		{
			P[i % k] = t[i];
			ans += score(t[i], r, s, p);
		}
		else if (P[i % k] == t[i])
			P[i % k] = 'n';
	}
	std::cout << ans << std::endl;
	return (0);

}