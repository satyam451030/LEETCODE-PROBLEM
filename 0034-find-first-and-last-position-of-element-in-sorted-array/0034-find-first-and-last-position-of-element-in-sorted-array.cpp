class Solution {
public:
    
    int first(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int answer = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                answer = mid;
               low = mid + 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return answer; 
    }
       int last(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int answer = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                answer = mid;
              high = mid - 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return answer; 
    }
 
    vector<int> searchRange(vector<int>& nums, int target) {
 int fir = first(nums, target);
 if(fir == -1) return {-1, -1};
 int las = last(nums, target);
  return {las, fir};
    }
};