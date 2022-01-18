#include<iostream>
using namespace std;

int power(int x,int n){
  int res = 1;
  if(n==0) return 1;

  while(n>0){
    if(n%2 != 0) res = res * x;
    x = x*x;
    n/=2;
  }
  return res;
}

int main() {
  int n,x;
  cin>>x>>n;
  cout<<power(x,n);
}