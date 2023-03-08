#include<iostream>
using namespace std;

int smallestSubArrayLen(int *arr,int n,int s) {
    int wStart = 0,wSum = 0,wLen = 0,res = n;
    for(int i=0;i<n;i++) {
        int nextEle = arr[i];
        wLen++;
        wSum += nextEle;
        if ( wSum >= s) {
            res = min(res,wLen);
            while( (wSum-arr[wStart])>= s ) {
                wSum -= arr[wStart];
                wStart = wStart + 1;
                wLen--;
                res = min(res,wLen);
            }
        }
    }
    return res;
}

int main() {
    int n,s;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cin>>s;

    int res = smallestSubArrayLen(arr,n,s);
    cout<<res<<endl;
    return 0;
}
