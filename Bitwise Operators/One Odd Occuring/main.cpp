#include<iostream>
#include<array>
using namespace std;

int main() {
  int n,res = 0;
  cin>>n;
  int arr[n];

  for(int i=0;i<n-1;i++) {
    cin>>arr[i];
    res = res ^ arr[i];
  }

  for(int i=1;i<=n;i++){
    res = res ^ i;
  }

  cout<<res<<endl;
}