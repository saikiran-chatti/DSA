#include<iostream>
using namespace std;

int longestEvenOdd(int arr[],int n){
  int k = 1,res = 0;
  for(int i=1;i<n;i++){
    if( (arr[i]%2 == 0 && arr[i-1]%2 == 1) || (arr[i]%2 == 1 && arr[i-1]%2 == 0) ){
      k++;
      res = max(k,res);
    }
    else
      k = 1;
  }
  return res;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<longestEvenOdd(arr,n);
}