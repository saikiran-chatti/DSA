#include <iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int el){
  int middle;
  while(low <= high){
    middle = (low+high)/2;
    if(arr[middle] == el)
      return middle;
    else if(arr[middle] > el)
      high = middle -1;
    else 
      low = middle +1 ;
  }
  return -1;
}

int main() {
  int n,i=0,x,middle;
  scanf("%d",&n);
  scanf("%d",&x);
  int arr[n];

  while(arr[i] < x)
    i*=2;
  
  binarysearch(arr,i/2,i-1,x);

  return 0;
}