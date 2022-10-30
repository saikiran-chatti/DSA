#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int  n;
    cin>>n;
    long long int arr[n];
    long long int count = 0;
    
    map<long long int,long long int> m;
    for(long long int i=0;i<n;i++) {
        cin>>arr[i];
        m[arr[i]]++;
    }
    
    for(auto a: m) {
        count++;
    }
    
    cout<<count;
    
    return 0;
}