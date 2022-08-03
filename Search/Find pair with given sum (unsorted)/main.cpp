#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  int n,x;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  cout<<"Enter x: "<<endl;
  cin>>x;

  map<int,int> hmap;

  for(int i=0;i<n;i++) {
    if(hmap.find(arr[i]) != hmap.end()) {
      cout<<"pair : "<<arr[i]<<" "<<(x-arr[i])<<endl;
    }
    hmap[ x - arr[i] ] = 1;
  }
  return 0;
}