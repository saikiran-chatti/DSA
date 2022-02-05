#include<iostream>
using namespace std;

int main() {
  int n,x = 0,res1=0,res2=0;
  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
    x = x ^ arr[i];
  }

  x = x & 1;

  for(int i=0;i<n;i++){
    if((arr[i] & x) == x){
      res1 = res1 ^ arr[i];
    }
    else {
      res2 = res2 ^ arr[i];
    }
  }

  cout<<res1<<" "<<res2<<endl;

}