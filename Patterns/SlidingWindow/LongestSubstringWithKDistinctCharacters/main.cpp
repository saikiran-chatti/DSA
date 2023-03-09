#include<iostream>
#include <unordered_map>

using namespace std;

int calcLen(unordered_map<char,int> umap) {
    int res = 0;

    for(auto a : umap) {
        res += a.second;
    }
    return res;
}

int findLongestSubstring(string arr,int n,int k) {
    unordered_map<char,int> umap;
    int wStart = 0,res = 0,len = 0;
    
    for(int i=0;i<n;i++) {
        umap[arr[i]]++;
        len = umap.size();

        if (len <= k) {
            res = max(res,calcLen(umap));
        }

        while (len > k) {
            char val = arr[wStart];
            umap[val]--;
            if (umap[val] == 0) {
                umap.erase(val);
            }
            wStart++;
            len = umap.size();
            res = max(res,calcLen(umap));
        }
    }

    return res;
}

int main() {
    int n,k;
    string str;

    cin>>str;
    cin>>k;

    n = str.size();
    int res = findLongestSubstring(str,n,k);
    cout<<res<<endl;

    return 0;
}


