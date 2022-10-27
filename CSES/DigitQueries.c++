#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    vector<int> inputs;
    while(t--) {
        int n;
        cin>>n;
        inputs.push_back(n);
    }

    for(auto i: inputs) {
        int n = i;
        // cout<<"nValue: "<<n<<endl;
        if ((n/10)==0) {
            cout<<n<<endl;
            continue;
        }
        int l = floor(log10(n)+1);
        int tmp = n/10;
        int first = (tmp*10) - ((l/2)*(tmp-1));
        // cout<<"lValue: "<<l<<endl;
        // cout<<"first: "<<first<<endl;
        if (n%10 == 0) {
            cout<<first%10<<endl;
        } else {
            int l = floor(log10(first)+1);
            cout<<(first%10)+((n%10)/l)<<endl;
        }
    }

    return 0;
}