#include<iostream>
using namespace std;

int freqInArr(int arr[],int n){
  int freq = 1;
  for(int i=1;i<n;i++){
    freq = 1;
    while(arr[i] == arr[i-1] && i<n){
      freq++;
      i++;
    }
    cout<<freq<<endl;
  }

  if(n==1 || arr[n-1] != arr[n-2])
    cout<<freq<<endl;
}

// 6
// 10 10 10 25 30 30

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  freqInArr(arr,n);
  return 0;
}