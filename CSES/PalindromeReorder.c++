#include<iostream>
#include<map>

using namespace std;

int main() {
    string s;
    pair<char, int> umap;

    cin>>s;
    int n = s.length();
    int count = 0;

    for(int i=0;i<n;i++)
        umap[s[i]]++;

    for(auto u:umap) {
        cout<<u.first<<" "<<u.second<<endl;
    }

    string nw = "";
    for(int i=0;i<n;i++)
        nw+="-";
    cout<<nw<<endl;

    for(auto u: umap) {
        // cout<<u.first<<" "<<u.second<<endl;
        int temp = u.second;
        if (temp % 2 == 0)  {
            while(temp>0) {
                s[n-count-1] = u.first;
                s[count] = u.first;
                nw[n-count-1] = u.first;
                nw[count] = u.first;
                cout<<n-count-1<<" "<<count<<" "<<u.first<<" "<<nw<<endl;
                count++;
                temp-=2;
            }
        } else {
            s[count] = u.first;
            nw[count] = u.first;
            count++;
        }
    }

    cout<<s<<endl;
    
    return 0;
}