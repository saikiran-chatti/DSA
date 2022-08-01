#include <iostream>
using namespace std;

// {3, 4, 8, -9, 20, 6}
// n = 6

int main() {
	int n;
	cin >> n;
  int arr[n];
  
	for (int i = 0; i < n; i++) {
    cin>>arr[i];
	}

  int a[n],b[n],sum = 0;

  for(int i=0;i<n;i++) {
    sum += arr[i];
    a[i] = sum;
  }
  
  sum = 0;
  
  for(int i=n-1;i>=0;i--) {
    sum += arr[i];
    b[i] = sum;
  }

  bool res = false;
  for(int i=0;i<n;i++) {
    if(a[i] == b[i])
      res = true;
  }

  cout<<"Result: "<<res<<endl;
  
	return 0;
}