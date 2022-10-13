#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        if ((n/10)==0) {
            cout<<n<<endl;
            continue;
        }
        int l = floor(log10(n)+1);
        int tmp = n/10;
        int first = (tmp*10) - (5*(tmp-1));
        if (n%10 == 0) {
            cout<<first%10<<endl;
        } else {
            cout<<(first%10)+((n%10)/l)<<endl;
        }
    }

    return 0;
}