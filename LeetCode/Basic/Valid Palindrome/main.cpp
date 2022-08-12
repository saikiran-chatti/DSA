// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        string out = "";
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int n = s.length();
        
        for(int i=0;i<n;i++)
            if (isalnum(s[i]))
                out+=s[i];
        
        n = out.length();
        
        int i = 0;
        
        if (n == 0) return true;
        
        while(i <= n/2) {
            if (out[i] != out[n-i-1])
                return false;
            i++;
        }
        return true;
    }
};