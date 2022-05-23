#include<iostream>
#include<limits.h>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n){
  vector<bool> isPrime(n+1,true);
  cout<<endl;
  for(int i=2;i*i<=n;i++) {
    if(isPrime[i]){
      for(int j=2*i;j<=n;j+=i){
        isPrime[j] = false;
      }
    }
  }
  
  isPrime[1] = false;
  for(int i=1;i<=n;i++) {
    string result = isPrime[i] == 1?"Prime":"Not prime";
    cout<<i<<" "<<result<<endl;
  }

}

int main() {
  int n;
  cin>>n;

  sieveOfEratosthenes(n);
}