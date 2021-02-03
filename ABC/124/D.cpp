#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n, k;
	std::string s;

	std::cin >> n >> k;
	std::cin >> s;

	std::vector<int> zero_one;
	if (s[0] == '0')
		zero_one.push_back(0);
	for (int i = 0; i < s.size();)
	{
		int j = i;
		while (j < s.size() && s[j] == s[i])
			++j;
		zero_one.push_back(j - i);
		i = j;
	}
	if (s.back() == '0')
		zero_one.push_back(0);
	std::vector<int> Sum((int)zero_one.size() + 1, 0);
	for (int i = 0; i < zero_one.size(); i++)
		Sum[i + 1] = Sum[i] + zero_one[i];
	int ans = 0;
	for (int left = 0; left < Sum.size(); left += 2)
	{
		int right = left + 2 * k + 1;
		if (right >= Sum.size())
			right = Sum.size() - 1;
		ans = std::max(ans, Sum[right] - Sum[left]);
	}
	std::cout << ans << std::endl;
	return (0);
}