#include <iostream>
using namespace std;

// find the maximum sum of k consecutive elements.
void windowSliding(int arr[], int n, int k) {
	int sum = 0;

	for (int i = 0; i < k; i++) {
		sum += arr[i];
	}

	int res = sum;
	for (int i = k; i < n; i++) {
		sum += arr[i] - arr[i - k];
		res = max(sum, res);
	}

	cout << res;
}

// Input: {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
// Exp. output: 45
int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	windowSliding(arr, n, k);
	return 0;
}