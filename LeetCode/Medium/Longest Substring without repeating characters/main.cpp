class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(),count=0,res = 0;
        unordered_map<char,int> umap;

        // check for base condition, if there is only one element return 1 as there is one unique ele.
        if (n==1) return 1;

        for(int i=0;i<n;i++) {
          // if there hashmap doesn't have character, add the index to the hashmap and
          // increment the substring count.
            if (umap.find(s[i]) == umap.end()) {
                count++;
                umap[s[i]] = i;
            } else {
              // if there is a character which is already there in the hashmap, take the current count
              // and put in the res. Then start the counter again from the first occurence of the string.
              // ex: saiksbcde
              // after hitting s, start the counter from i.
                res = max(res,count);
                count = 0;
                i = umap[s[i]];
                umap.clear();
            }
        }
        res = max(res,count);
        return res;
    }
};