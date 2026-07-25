class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int totalSubsets = 1 << nums.size();
        vector<vector<int>> ans;
     for(int num = 0;num < totalSubsets ;num++){
       vector<int> currentSubset;
        for(int i = 0;i < nums.size();i++){
            if(num & (1 << i)){
               currentSubset.push_back(nums[i]);
            }
        }
        ans.push_back(currentSubset);
     }   
     return ans;
    }
};