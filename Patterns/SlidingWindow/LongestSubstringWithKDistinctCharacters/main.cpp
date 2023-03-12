#include<iostream>
#include <unordered_map>

using namespace std;

int findLongestSubstring(string arr, int k) {
    unordered_map<char,int> umap;
    int wStart = 0,res = 0,len = 0,n = arr.size();
    bool check = true;

    for(int i=0;i<n;i++) {
        umap[arr[i]]++;
        len = umap.size();

        if (len >=k)
            check = false;
        while (len > k) {
            char val = arr[wStart];
            umap[val]--;
            if (umap[val] == 0) {
                umap.erase(val);
            }
            wStart++;
        }
        len = umap.size();
        res = max(res,i-wStart+1);
    }

    return check?-1:res;
}

int main() {
    int n,k;
    string str;

    cin>>str;
    cin>>k;

    n = str.size();
    int res = findLongestSubstring(str,k);
    cout<<res<<endl;

    return 0;
}


