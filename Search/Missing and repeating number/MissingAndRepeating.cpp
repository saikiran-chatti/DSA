#include<iostream>
using namespace std;

void func(int arr[],int n){
    int sum=0,total = n * ((n+1)/2),rep = 0;
    for(int i=0;i<n;i++){
        sum += abs(arr[i]);
        int temp = arr[abs(arr[i])];
        if(temp < 0){
            cout<<"Repeating: "<<abs(temp)<<endl;
            rep = abs(temp);
        }
        arr[abs(arr[i])] = -arr[abs(arr[i])];
    }
    int missing = total-(sum-rep);
    cout<<"Missing "<<missing<<endl;
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