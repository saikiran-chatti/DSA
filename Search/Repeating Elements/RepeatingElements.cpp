#include <stdio.h>
#include <algorithm>
using namespace std;

int repeatingElement(int arr[],int n){
  int max = 0,total = 0;
  
  for(int i=0;i<n;i++){
    if(arr[i] > max)
      max = arr[i];
    total += arr[i];
  }
  int count = n - max - 1;
  int sum = max * (max + 1)/2;
  for(int i=0;i<n;i++){
    if( (total - (arr[i]*count)) == sum)
      return arr[i];
  }
  return -1;
}

int main() {
  int n;
  scanf("%d",&n);

  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  
  repeatingElement(arr,n);
  return 0;
}