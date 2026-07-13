class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> visited;
        for (int i = 0; i < nums.size(); i++) {
         if (visited.count(nums[i])) {
                return true; 
            }
              visited.insert(nums[i]);
              if(visited.size() > k){
                visited.erase(nums[i - k]);
              }
        }
        return false;
    }
};

