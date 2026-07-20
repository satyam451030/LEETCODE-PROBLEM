class Solution {
public:
    int missingNumber(vector<int>& nums) {
     long long n = nums.size() ;
     long long sum = n*(n + 1)/2;
     long long  sp = 0;
     for(int i = 0; i < n; i++){
       sp +=  nums[i];
     }
     return   sum - sp;
    }
};

