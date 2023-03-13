#include<iostream>
#include<unordered_map>
using namespace std;

int noRepeatingChar(string s) {
    int n = s.length(),wStart = 0,res = 0;
    unordered_map<char,int> umap;
    for(int i=0;i<n;i++) {
        int ele = s[i];
        if (umap.find(ele) == umap.end()) {
            umap[ele]++;
            res = max(res,(int)umap.size());
        } else {
            res = max(res,(int)umap.size());
            while(s[wStart]!=ele) {
                umap.erase(s[wStart]);
                wStart++;
            }
            wStart++;
        }
        umap[ele]++;
    }
    return res;
}

int main() {
    string s;
    cin>>s;

    int res = noRepeatingChar(s);
    cout<<res<<endl;

    return 0;
}