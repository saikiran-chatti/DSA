#include<iostream>
using namespace std;

int main() {
  // Brian and Kerningham Algorithm
  int n,res = 0;
  cin>>n;
  
  while(n > 0){
    n = n & (n-1);
    res ++;
  }
  cout<<res;
  return 0;
}