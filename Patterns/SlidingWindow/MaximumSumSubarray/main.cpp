#include<iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cin>>k;

    int windowSum = 0,windowStart = 0,res = arr[0];
    for(int i=0;i<n;i++) {
        windowSum += arr[i];

        if (i>=k-1) {
            res = max(res,windowSum);
            windowSum-=arr[windowStart];
            windowStart++;
        }
    }
    cout<<res<<endl;
    
    return 0;
}