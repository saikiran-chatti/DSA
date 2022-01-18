#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  cout<< ((n & (n-1)) == 0);
  return 0;
}