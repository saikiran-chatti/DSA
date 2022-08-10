class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length(),i=0,res = 0;
        unordered_map<char,int> umap;
        bool check =  false;
        
        for(int i=0;i<n;i++) {
            umap[s[i]]++;
        }
        
        for(auto i=umap.begin();i!=umap.end();i++) {
            int temp = i->second;
            
            if((temp % 2) == 0){
                res += temp;
            }
            else if ( (temp) > 1 ) {
                res += (temp-1);
                check = true;
            }
            else
                check = true;
        }
        
        if(check)
            res++;
            
        return res;
        
    }
};