#include<iostream>
using namespace std;

int main() {
    long int t;
    cin>>t;
    
    while(t-->0) {
        int64_t i,j;
        cin>>i;
        cin>>j;
        int64_t mid = -1,res = 0;
        // cout<<i<<" "<<j<<endl;
        
        if (i > j) {
            mid = ( (i-1) * i ) + 1;
            // cout<<"mid: "<<mid<<endl;
            res = i%2 == 0?(mid+(i-j)):(mid - (i-j));
        } else if(i < j) {
            mid = ( (j-1) * j ) + 1;
            // cout<<"mid: "<<mid<<endl;
            res = j%2 == 0?(mid - (j-i)):(mid + (j-i));
        } else {
            res = ((i -1) * i) + 1;
        }
        
        cout<<res<<endl;
    }
}