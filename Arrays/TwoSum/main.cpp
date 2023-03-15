#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    for(int i=0;i<nums.size();i++) {
        if (i>0 && nums[i]==nums[i-1]) {
            continue;
        }
        int low = i+1;
        int high = nums.size()-1;
        while(low<high) {
            int s = nums[low]+nums[high]+nums[i];
            if (s<0) {
                low++;
            } else if (s>0) {
                high--;
            } else {
                vector<int> r = {nums[i],nums[low],nums[high]};
                res.push_back(r);
                ++low;
                while(nums[low] == nums[low-1] && low<high) low++;
            }
        }
    }

    return res;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0;i<n;i++) {
        int t;
        cin>>t;
        arr.push_back(t);
    }

    vector<vector<int>> res = threeSum(arr);
    for(int i=0;i<res.size();i++) {
        for(int k=0;k<res[i].size();k++) {
            cout<<res[i][k]<<" ";
        }
        cout<<endl;
    }
}