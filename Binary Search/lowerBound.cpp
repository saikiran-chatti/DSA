#include<iostream>
using namespace std;

int main() {
    int n,target;
    cin>>n;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // find left most element (first value) greater than equal to x.
    int low = 0;
    int high = n-1;
    int res = -1;
    while(low<=high) {
        int mid = (low + (high-mid)/2);

        if (arr[mid] >= target) {
            high = mid - 1;
            res = mid;
        } else {
            low = mid + 1;
        }
    }
    cout<<res<<endl;
    return 0;
}