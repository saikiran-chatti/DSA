#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	string s1[n];
	string res;

	for (int i = 0; i < n; i++) {
		cin >> s1[i];
	}

	sort(s1.begin(), s1.end());
	string first = s1[0];
	string last = s1[n - 1];

	for (int i = 0; i < first.length(); i++) {
		if (first[i] == last[i])
			res += first[i];
		else
			break;
	}

	cout << res;

	return 0;
}
