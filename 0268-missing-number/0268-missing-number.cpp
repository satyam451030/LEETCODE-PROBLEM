class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xorRes = 0;
    for(int i = 0;i <= n; i++){
        xorRes ^= i;
    }
    for(int val : nums){
        xorRes ^= val;
    }
    return xorRes;
    }
};

