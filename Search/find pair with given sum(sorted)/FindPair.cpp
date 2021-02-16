#include <iostream>
#include <vector>
using namespace std;

bool findPair(vector<int> arr,int x){

  int n=arr.size(),low = 0,high = n-1;
  while(low<high){
    if(arr[low] + arr[high] == x)
      return true;
    else if( (arr[low] + arr[high]) > x)
      high--;
    else
      low++;
  }

  return false;
}

int main() {
  int n,x;
  scanf("%d",&n);
  vector<int> arr(n);

  for(int i=0;i<n;i++){
    int temp;
    scanf("%d",&temp);
    arr.push_back(temp);
  }
  scanf("%d",&x);
  cout<<findPair(arr,x);

  return 0;
}