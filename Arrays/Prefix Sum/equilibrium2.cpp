#include <iostream>
using namespace std;

bool equilibrium(int arr[],int n){
  
}

int main() {
  int n,sum = 0;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }

  for(int i=0;i<n;i++)
    sum+=arr[i];

  int lsum = 0;
  for(int i=0;i<n;i++) {
    if (lsum == (sum - arr[i]) ) {
      cout<<"true";
      return 0;
    }

    lsum += arr[i];
    sum -= arr[i];
  }
  cout<<"false";
  return 0;
}