#include <iostream>
using namespace std;

// doesn't work if it has dupilicate elements or negative numbers. :(
int main() {
  int n,x,middle;
  scanf("%d",&n);
  scanf("%d",&x);
  int arr[n],low = 0,high = x;

  for(int i=0;i<n;i++){
    int temp;
    scanf("%d",&temp);
    arr[i] = temp;
  }
  while(low <=high){
    middle = (low + high)/2;

    if(arr[middle] == x){
      cout<<middle<<endl;
    }
    else if (arr[middle] < x){
      low = middle + 1;
    }
    else {
      high = middle - 1;
    }
  }
 
  cout<<1<<endl;
  return 0;
}