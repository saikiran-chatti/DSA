#include <iostream>
using namespace std;

int main() {
    int64_t n;
    cin>>n;
    int64_t res = 1;
    for(int64_t i=0;i<n;i++) {
        res = (res * 2) % 1000000007;
    }
    cout<<res<<endl;
    return 0;
}