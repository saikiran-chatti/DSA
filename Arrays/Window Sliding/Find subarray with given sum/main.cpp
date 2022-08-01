#include <iostream>
using namespace std;

bool findSubArray(int arr[], int n, int sum) {
	int m = arr[0];
	int j = 0;
	for (int i = 1; i < n; i++) {
		while ((arr[i] + m) > sum)
			m -= arr[j++];
		if (arr[i] + m == sum) {
			cout << "Found in between " << j << " and " << i << endl;
			return true;
		} else
			m += arr[i];
	}
	return false;
}

// {15, 2, 4, 8, 9, 5, 10, 23}
// sum = 23
// GFG Solution: https://ide.geeksforgeeks.org/DarCwv91az
int main() {
	int n;
	cin >> n;
	int arr[n];
	int sum;
	cin >> sum;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << findSubArray(arr, n, sum);
	return 0;
}