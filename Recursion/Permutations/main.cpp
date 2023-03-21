#include<iostream>
#include<string>
#include<vector>

using namespace std;

void generatePermutations(vector<int> &nums,int index,vector<int> current,vector<vector<int>> &res) {
    if (current.size() == nums.size()) {
        res.push_back(current);
        return ;
    }
    
    for(int i=index,k=0,n=nums.size();k<nums.size();k++,i++) {
        if (find(current.begin(),current.end(),nums[i%n]) == current.end()) {
            current.push_back(nums[i%n]);
            generatePermutations(nums,(i+1)%n,current,res);
            current.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    generatePermutations(nums,0,{},res);
    return res;
}

int main() {
    vector<int> inp = {1,2,3};
    permute(inp);
}