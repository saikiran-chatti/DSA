#include <iostream>
using namespace std;

int countOccurences(int arr[],int n,int x,bool flag) {
  int low = 0,high = n-1,mid = (low+high)/2, start = 0,end = 0;
  
  while(low<=high) {
    mid = (high + low)/2;
    
    if(arr[mid] == x)  {
      if (flag) {
        if (mid == 0 || arr[mid] != arr[mid-1]) {
          start = mid;
          return start;
        } else {
          high = mid - 1;
        }
      } else {
        if (mid == n-1 || arr[mid] != arr[mid+1]) {
          end = mid;
          return end;
        } else {
          low = mid + 1;
        }
      }
    } else if (arr[mid] > x) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return flag ?start:end;
}

int main() {
  int n,x;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }

  cout<<"Enter element to search"<<endl;
  cin>>x;

  int end = countOccurences(arr,n,x,false);
  int start = countOccurences(arr,n,x,true);
  cout<<end<<" "<<start<<endl;
  cout<<end - start + 1;

  
  return 0;
}