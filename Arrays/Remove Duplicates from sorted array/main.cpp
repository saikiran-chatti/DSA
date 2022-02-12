#include<iostream>
using namespace std;

int remDup(int arr[],int n) {
  int k = 0;
  for(int i=1;i<n;i++){
    if(arr[i] != arr[i-1]){
      k++;
      arr[k] = arr[i];
    }
  }
  return k;
}

int main() {
  int n;
  cin>> n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[n];
  int k = remDup(arr,n);
  for(int i=0;i<k;i++)
    cout<<arr[i];
  return 0;
}