#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector< vector<int> > list;

    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a;
        cin>>b;
        
        list.push_back({a,b});
    }
    
    // sort(list);
    for(auto r: list) {
        cout<<r[0]<<" "<<r[1]<<endl;
    }

    return 0;
}