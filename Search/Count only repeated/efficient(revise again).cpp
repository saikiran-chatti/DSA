#include <iostream>
using namespace std;

pair<int, int> sequence(const vector<int>& a)
{
	if (a.size() == 0)
		return {0, 0};

	int s = 0;
	int e = a.size() - 1;
	while (s < e)
	{
		int m = (s + e) / 2;

		if (a[m] >= m + a[0])
			s = m + 1;

		else
			e = m;
	}
	return {a[s], a.size() - (a[a.size() - 1] - a[0])};
}

int main()
{
	pair<int, int>p = sequence({ 1, 2, 3, 4, 4, 4, 5, 6 });
	cout << "Repeated element is " << p.first
		<< ", it appears " << p.second << " times";
	return 0;
}