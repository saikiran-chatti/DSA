#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,target;
    int arr[m][n];
    cin>>target;
    for(int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }

    /*
        1   3  5  7
        10 11 16 20
        23 30 34 60
    */

    lower_bound(arr.begin(),arr.end(),target);
}