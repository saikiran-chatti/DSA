#include<iostream>
using namespace std;

int main() {
    long long int n,m,k,res=0;
    cin>>n;
    cin>>m;
    cin>>k;
    map<long long int,long long int> pp;

    long long int people[n],apAvail[m];
    for(long long int i=0;i<n;i++) {
        cin>>people[i];
        pp[people[i]]++;
    }

    for(long long int i=0;i<m;i++) {
        cin>>apAvail[i];
        if (pp.find(apAvail[i]) != pp.end() || pp.find(apAvail[i]+k) != pp.end() || pp.find(apAvail[i]-k) != pp.end() ) {
            res++;
        }
    }

    cout<<res<<endl;
    return 0;
}