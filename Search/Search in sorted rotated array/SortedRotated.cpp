#include <iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int x){
  int middle;
  while(low<=high){
    middle = (low+high)/2;
    if(arr[middle] == x)
      return middle;
    else if(arr[middle] > x){
      high = middle -1;
    }
    else {
      low = middle + 1;
    }
  }
}

int main() {
  int n,x,middle;
  scanf("%d",&n);
  scanf("%d",&x);
  int arr[n],low = 0,high = x-1;

  for(int i=0;i<n;i++){
    int temp;
    scanf("%d",&temp);
    arr[i] = temp;
  }
  

  return 0;
}