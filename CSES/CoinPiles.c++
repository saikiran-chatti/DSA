#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int64_t t;
	cin >> t;
    int temp = t;
	while (temp--) {
		long long int a, b;
		cin >> a;
		cin >> b;

        if ((a + b) % 3 != 0) {
            cout<<"NO"<<endl;
			continue;
		}

		if (a < b) {
			swap(a, b);
		}

		int quot = floor(a / 2);
		int rem = a % 2;
		if ((quot+rem) > b) {
            cout<<"NO"<<endl;
			continue;
		}
        cout<<"YES "<<endl;
	}
}