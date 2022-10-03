#include<iostream>
using namespace std;

int main() {
    int64_t n;
    cin>>n;
    for(int64_t t=1;t<=n;t++) {
        int64_t count = 0;
        for(int64_t i=0;i<t;i++) {
            for(int64_t j=0;j<t;j++) {
                if ((i-2) > 0) count+=2;
                if ((i-1) > 0) count+=2;
                if ((j-2) > 0) count+=2;
                if ((j-1) > 0) count+=2;

                if ((i+1) > 0) count+=2;
                if ((i+2) > 0) count+=2;
                if ((j+2) > 0) count+=2;
                if ((j+1) > 0) count+=2;
            }
        }
        cout<<count<<endl;
    }
}