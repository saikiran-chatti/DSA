#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int low = 0, high = n-1,res = -1;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    while(low<=high) {
        int mid = low + (high-low)/2;
        if (arr[mid]>arr[mid+1]) {
            res = mid;
            break;
        } else if (arr[mid]> arr[0]){
            low = mid + 1;
        } else if (arr[mid]<arr[0]) {
            high = mid -1;
        }
    }

    cout<<res<<endl;
    return 0;
}