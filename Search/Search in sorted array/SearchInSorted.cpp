#include <iostream>
using namespace std;

int main() {
  int n,x,middle;
  scanf("%d",&n);
  scanf("%d",&x);
  int arr[n],low = 0,high = x-1,pos=0;

  for(int i=0;i<n;i++){
    int temp;
    scanf("%d",&temp);
    arr[i] = temp;
  }
  return 0;
}