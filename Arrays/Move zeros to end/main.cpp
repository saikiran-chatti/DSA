#include<iostream>
#include<algorithm>
using namespace std;

void moveZeros(int arr[],int n){
  int k = -1;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      k++;
      swap(arr[k],arr[i]);
    }
  }
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[n];
  }
  moveZeros(arr,n);
}