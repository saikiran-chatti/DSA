#include<iostream>
using namespace std;

int secondLargest(int arr[],int n) {
    int max = arr[0],sec = -1,sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(arr[i]> max){
            sec = max;
            max = arr[i];
        }
        else if (arr[i]< max && sec < arr[i]){
            sec = arr[i];
        }
    }
    if(max*n == sum)
        sec = -1;
    cout<<"max: "<<max<<" sec: "<<sec<<endl;
    return sec;
}

int main() {
    int n = 5;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLargest(arr,n);
    return 0;
}