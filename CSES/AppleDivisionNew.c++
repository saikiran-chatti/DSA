#include<bits/stdc++.h>
using namespace std;

// Using bitmasking approach..
int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int64_t m = 1<<n;
    int64_t res = INT_MAX;
    for(int i=0;i<m;i++) {
        int64_t sumA = 0;
        int64_t sumB = 0;

        for(int j=0;j<n;j++) {
            if (i & (1<<j)) {
                sumA += arr[j];
            } else {
                sumB += arr[j];
            }
        }
        res = min(res,abs(sumA-sumB));
    }

    cout<<res<<endl;
    return 0;
}