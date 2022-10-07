#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    string s;
    unordered_map<char, int> umap;

    cin>>s;
    long int n = s.length();
    long int count = 0;
    int oddCount = 0;
    char oddValue = '-';

    for(unsigned int i=0;i<n;i++) {
        umap[s[i]]++;
    }

    for(auto u: umap) {
        long int temp = u.second;
        if (temp % 2 == 0)  {
            while(temp>0) {
                s[n-count-1] = u.first;
                s[count] = u.first;
                count++;
                temp-=2;
            }
        } else {
            if (++oddCount > 1) {
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
            oddValue = u.first;
        }
    }

    if (oddCount == 1) {
        int len = umap[oddValue];
        s[n/2] = oddValue;
        for(int i = (n/2) - (len/2);i<=(n/2)+(len/2);i++) {
            s[i] = oddValue;
        }
    }

    cout<<s<<endl;
    
    return 0;
}