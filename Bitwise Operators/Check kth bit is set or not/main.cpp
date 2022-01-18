#include<iostream>
using namespace std;

void checkBit(int n,int k){
  int t = n,res;
  if (k!=0)
    t = n >> (k-1);
  res = t & 1;
  cout<<res;
}

int main() {
  int n,k;
  cin>>n>>k;

  checkBit(n,k);
}