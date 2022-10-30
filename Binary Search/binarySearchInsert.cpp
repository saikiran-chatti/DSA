#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int low = 0,high = n-1,target,res=-1;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter target: "<<endl;
    cin>>target;
    while(low<=high) {
        int mid = low + (high-low)/2;
        if (arr[mid] >= target) {
            res = mid;
            high = mid -1;
        } else {
            low = mid + 1;
        }
    }

    cout<<res<<endl;

    return 0;    
}