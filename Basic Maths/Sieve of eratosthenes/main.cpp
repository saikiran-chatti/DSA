#include<iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n){
  vector<bool> isPrime(n+1,true);

  for(int i=2;i*i<n;i++){
    if(isPrime[i]){
      
    }
  }

}

int main() {
  int n;
  cin>>n;

  sieveOfEratosthenes(n);
}