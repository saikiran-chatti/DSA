#include<iostream>
#include<cmath>

using namespace std;

int maxConsecutive1(int arr[],int n) {
  int res =0,k=0;
  for(int i=0;i<n;i++){
    k = 0;
    while(i<n && arr[i] == 1){
      i++;
      k++;
    }
    res = max(res,k);
  }
  return res;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<maxConsecutive1(arr,n);
  return 0;
}