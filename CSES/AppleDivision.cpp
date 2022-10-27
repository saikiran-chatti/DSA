#include <iostream>
#include <stdlib.h> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    int64_t arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    if (arr[0] == arr[n-1]) {
        if (n%2 == 0) {
            cout<<0;
        } else {
            cout<<arr[0];
        }
        return 0;
    }
    
    int i = 0,k=0,r=n-1;
    long long int rsum = arr[r];
    long long int lsum = 0;
    int count = 0,count2 = 0;
    long long int res = INT_MAX;

    while(count<n) {
        while((rsum > lsum) && (i<n-1)) {
            lsum += arr[i];
            ++count2;
            i++;  
            // cout<<"lsum: "<<lsum<<" rsum: "<<rsum<<endl;
        }
        while((lsum > rsum) && (k<n-1)) {
            rsum += arr[k];
            lsum -= arr[k];
            k++;
            if (count2 == n-1) {
                res = min(res,abs(rsum-lsum));
            }
            // cout<<"..lsum: "<<lsum<<" rsum: "<<rsum<<endl;
        }
        count++;
    }
    cout<<(res);
    
    return 0;
}