#include <iostream>
using namespace std;

// Given a fixed array and multiple queries. Efficiently solve the queries.

int main() {
	int n, queries, sum = 0;
	;
	cin >> n;
	int arr[n], preSum[n], res[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		preSum[i] = sum;
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << preSum[i] << " ";
	}
	cout << endl;

	cout << "Enter the number of queries: ";
	cin >> queries;

	for (int i = 0; i < queries; i++) {
		cout << "Enter query " << i << " :" << endl;
		int start, end;
		cin >> start >> end;
		// logic...
		int sec = start - 1 > 0 ? preSum[start - 1] : 0;
		res[i] = preSum[end - 1] - sec;
	}

	for (int i = 0; i < queries; i++)
		cout << res[i] << " ";

	cout << endl;
	return 0;
}