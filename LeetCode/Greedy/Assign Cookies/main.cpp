// https://leetcode.com/problems/assign-cookies/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n1 = g.size();
        int n2 = s.size();
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        
        int j = 0,count = 0;
        for(int i=0;((i<n1)&&(j<n2));i++){
            if(s[j] >= g[i]){
                count++;
                j++;
            }
        }
        
        return count;
    }
};