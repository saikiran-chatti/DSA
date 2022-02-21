#include<iostream>
#include<math.h>

using namespace std;

int maxDiff(int arr[],int n){
  int minVal = arr[0];
  int res = -1;
  for(int i=0;i<n;i++){
    if(minVal > arr[i])
      minVal = arr[i];
    else {
      res = max(res,(arr[i]-minVal));
    }
  }
  return res;
}

// 7
// 2,3,10,6,4,8,1
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<maxDiff(arr,n);
}