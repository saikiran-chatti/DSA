#include<iostream>
#include<cmath>
using namespace std;

int trappingRainWater(int arr[],int n){
  int res=0;
  int lmaxArr[n],rmaxArr[n];

  lmaxArr[0] = arr[0];
  for(int i=1;i<n;i++){
    lmaxArr[i] = max(arr[i], lmaxArr[i - 1]);
  }

  rmaxArr[n - 1] = arr[n - 1];
  for(int i=n-2;i>0;i--){
    rmaxArr[i] = max(arr[i], rmaxArr[i + 1]);
  }

  for(int i=1;i<n;i++){
    res += min(lmaxArr[i],rmaxArr[i]) - arr[i];
  }
  return res;
}

//   int arr[] = {5, 0, 6, 2, 3}, n = 5;
int main() {
  // int n;
  // cin>>n;
  // int arr[n];
  // for(int i=0;i<n;i++)
  //   cin>>arr[i];

  int arr[] = {5, 0, 6, 2, 3}, n = 5;
  cout<<trappingRainWater(arr,n);
  return 0;
}