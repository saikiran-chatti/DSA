#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end){
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
}
int main() {
  int n,d;
  cin>>n;
  cin>>d;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  reverse(arr,0,d);
  reverse(arr,d+1,n);
  reverse(arr,0,n);
}
