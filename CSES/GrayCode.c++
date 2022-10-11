#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cin>>n;
    
    string a = "";
    a.append(n-a.length(),'0');
    cout<<a<<endl;
    a = "";
    a.append(n-a.length()-1,'0');
    a+="1";
    cout<<a<<endl;
    if(n == 1) {
        return 0;
    } else {
        for(int i=2;i<(1<<n);i++) {
            int res = (i ^ (i>>1));
            string tmp = "";
            while(res > 0) {
                tmp+=to_string(res%2);
                res/=2;
            }
            tmp.append(n - tmp.length(), '0');

            for(int i=0;i<n/2;i++) {
                swap(tmp[i],tmp[n-i-1]);
            }

            cout<<tmp<<endl;
        }
    }
}