#include<iostream>
#include<vector>
using namespace std;

long long zeroFilledSubarray(vector<int>& nums) {
    long long res = 0;
        for(int i=0;i<nums.size();i++) {
            int j = i;
            while(i<nums.size() && nums[i]==0) {
                i++;
            }
            if (i!=j) {
                long long int diff = (i-j);
                if (diff %2 == 0 ) {
                    res += (diff/2) * (diff+1);
                } else {
                res += ((diff+1)/2) * (diff);
                }
            }

        }
        return res;
}

int main() {
    int n,inp;
    cin>>n;

    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>inp;
        nums.push_back(inp);
    }

    cout<<zeroFilledSubarray(nums);
    return 0;
}