// https://leetcode.com/problems/lemonade-change/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> m;
        int n = bills.size();
        for(int i=0;i<n;i++) {
            if(bills[i] == 10) {
                if(m[5] >= 1) {
                    m[5]-=1;
                } else {
                    return false;
                }
            } else if(bills[i] == 20) {
                if(m[10] >= 1 && m[5] >=1) {
                    m[10]--;
                    m[5]--;
                } else if(m[5] >= 3) {
                    m[5]-=3;
                } else {
                    return false;
                }
            }
            m[bills[i]]++;
        }
        
        return true;
    }
};