#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int check = (n * (n+1))/2;
    if ((check % 2) != 0) {
        cout<<"NOT POSSIBLE"<<endl;
        return 0;        
    }
    int a[n/2];    
    check/=2;
    cout<<"check: "<<check<<endl;
    cout<<n/2<<endl;
    int fsum = 0;    
    for(int i=0;i<(n/2);i++) {
        if (fsum <= check) {
            a[i] = n - i;
            fsum += (n-i);            
        }
    }
    int l1 = sizeof(a)/sizeof(a[0]);
    for(int i=l1-1;i>=0;i--)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<(n/2);i++) {
        int t = a[i];
        while ( (a[i]-t) > 0 ) {
            cout<<++t<<" ";
      }
    for(int i=1;i<a[0];i++) {
        cout<<i<<" ";
    }
    return 0;
}