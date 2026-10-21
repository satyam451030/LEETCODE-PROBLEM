class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int n = nums.size();
     vector<int> ans;

     for(int i = 0; i < n;i++){
     int count = 0;
     bool counted = false;
    for(int j = 0;j < i;j++){
        if(nums[i] == nums[j]){
           counted = true;
           break;
        }
    }
    if(counted) continue;
     for(int j = 0;j < n;j++){
        if(nums[i] == nums[j]){
            count++;
        }
    }
    if(count > n/3){
        ans.push_back(nums[i]);
    }
     } 
return ans;
    }
};