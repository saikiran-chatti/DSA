#include<iostream>
#include<cmath>
using namespace std;

void leadersInArr(int arr[],int n) {
  int k = n-1;
  cout<<arr[k]<<" ";
  for(int i=n-2;i>=0;i--){
    if(arr[k] < arr[i]){
      k = i;
      cout<<arr[k]<<" ";
    }
  }
}
// 7, 10, 4, 10, 6, 5, 2
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  leadersInArr(arr,n);
  return 0;
}