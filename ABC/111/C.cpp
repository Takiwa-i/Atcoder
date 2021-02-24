#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<int> E;
	std::map<int, int> ME;
	std::vector<int> O;
	std::map<int, int> MO;
	for (int i = 0; i < n; i++)
	{
		int v;
		std::cin >> v;
		if (i % 2 == 0)
		{
			E.push_back(v);
			ME[v]++;
		}
		else
		{
			O.push_back(v);
			MO[v]++;
		}
	}
	std::vector<std::pair<int, int> > EF;
	std::vector<std::pair<int, int> > OF;
	for (std::map<int, int>::iterator i = ME.begin(); i != ME.end(); i++)
	{
		int key = i->first;
		int value = i->second;
		EF.push_back(std::make_pair(value, key));
	}
	std::sort(EF.begin(), EF.end(), std::greater<std::pair<int, int> >());
	for (std::map<int, int>::iterator i = MO.begin(); i != MO.end(); i++)
	{
		int key = i->first;
		int value = i->second;
		OF.push_back(std::make_pair(value, key));
	}
	std::sort(OF.begin(), OF.end(), std::greater<std::pair<int, int> >());
	if (EF[0].second != OF[0].second)
		std::cout << E.size() - EF[0].first + O.size() - OF[0].first << std::endl;
	else
	{
		int e1, e2;
		int o1, o2;
		int ans;
		if (EF.size() > 1 &&  OF.size() > 1)
		{
			e1 = EF[0].first;
			e2 = EF[1].first;
			o1 = OF[0].first;
			o2 = OF[1].first;
			ans = std::min(E.size() - e1 + O.size() - o2, E.size() - e2 + O.size() - o1);
		}
		else if (EF.size() < 1 && OF.size() > 1)
		{
			e1 = EF[0].first;
			e2 = 0;
			o1 = OF[0].first;
			o2 = OF[1].first;
			ans = std::min(E.size() - e1 + O.size() - o2, E.size() - e2 + O.size() - o1);
		}
		else if (EF.size() > 1 && OF.size() < 1)
		{
			e1 = EF[0].first;
			e2 = EF[1].first;
			o1 = OF[0].first;
			o2 = 0;
			ans = std::min(E.size() - e1 + O.size() - o2, E.size() - e2 + O.size() - o1);
		}
		else
		{
			ans = n / 2;
		}
		std::cout << ans << std::endl;
	}
	return (0);
}