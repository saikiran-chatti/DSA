#include<iostream>
using namespace std;

int main() {
    string s;

    string a[6];

    a[0] = "abc";
    a[1] = "acb";
    a[2] = "bca";
    a[3] = "bac";
    a[4] = "cba";
    a[5] = "cab";

    sort(a,a+4);

    for(int i=0;i<4;i++) {
        cout<<a[i]<<endl;
    }
}