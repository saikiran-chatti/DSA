#include<iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long int n;
    unsigned long long int res=0;
    unsigned long long int p = 0;
    int count = 1;

    cin>>n;
l
    while(n > p) {
        p = (int) (floor(pow(5,count++)));
        res += (int) (floor(n/p));
    }

    cout<<res<<endl;

    return 0;
}