#include<iostream>
using namespace std;

void func(int arr[],int n){
  for(int i=0;i<n;i++){
    int temp = arr[abs(arr[i])];
    if(temp < 0){
      cout<<"Absolute: "<<abs(temp)<<endl;
      break;
    }
    arr[abs(arr[i])] = -arr[abs(arr[i])];
  }
}

int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  func(arr,n);
  return 0;
}