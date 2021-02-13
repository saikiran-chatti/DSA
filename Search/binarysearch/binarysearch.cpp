#include <iostream>
using namespace std;

// binary search
bool binarysearch(int arr[],int n,int x){
  int l= 0,h = (0+n-1)/2;
  while(l<=h){
    int middle = (l+h)/2;
    if(arr[middle] == x)
      return true;
    else if(arr[middle]>x)
      h = middle-1;
    else
      l = middle + 1;
  }
  return false;
}

int main() {
  int n;
  scanf("%d",&n);
  int x;
  scanf("%d",&x);
  int arr[n];
  for(int i=0;i<n;i++){
    int temp;
    scanf("%d",&temp);
    arr[i] = temp;
  }

  cout<<binarysearch(arr,n,x)<<endl;
}