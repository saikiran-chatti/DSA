#include<iostream>
using namespace std;

int largestElement(int arr[],int n) {
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n = 5;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestElement(arr,n);
    return 0;
}