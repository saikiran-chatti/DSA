#include <iostream>
using namespace std;

// recursive binary search
bool binarysearch(int arr[],int n,int l,int h,int x){
    if(l>h)
      return false;
    int mid = (l+h)/2;
    if(arr[mid] == x)
      return true;
    if(arr[mid] > x)
      binarysearch(arr, n, l, mid-1, x);
    else
      binarysearch(arr, n, mid+1, h, x);
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

  cout<<binarysearch(arr,n,0,n-1,x)<<endl;
}