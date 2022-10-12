#include<iostream>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;
    
    int64_t p = 1<<n;
 
    for(int i=0;i<p;i++) {
        int tmp = n;
        string res = "";
        bool flip = true;
 
        while(tmp--) {
            int64_t r = 1<<tmp;
 
            if ( (i/(2*r)) % 2  != 0) flip = false;
            else flip = true;
 
            if (flip) {
                if( ( (i/r) % 2 ) == 0) {
                    res += "0"; 
                } else {
                    res += "1";
                }
            } else {
                if ( ( (i/r) % 2 ) == 0) {
                    res += "1";
                } else {
                    res += "0";
                }
            }
 
        }
        cout<<res<<endl;
    }
}