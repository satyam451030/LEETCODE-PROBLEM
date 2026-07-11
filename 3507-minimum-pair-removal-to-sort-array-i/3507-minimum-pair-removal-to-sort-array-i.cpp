class Solution {
public:
bool isSorted(const vector<int>& arr) {
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] < arr[i - 1]) {
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        vector<int> arr = nums;
        int operations = 0;
        
        while (!isSorted(arr)) {
            int targetIdx = 0;
            long long minSum = (long long)arr[0] + arr[1]; 
            
            for (int i = 1; i < arr.size() - 1; ++i) {
                long long currentSum = (long long)arr[i] + arr[i + 1];
                if (currentSum < minSum) {
                    minSum = currentSum;
                    targetIdx = i;
                }
            }
            arr[targetIdx] = minSum;
            arr.erase(arr.begin() + (targetIdx + 1));
            operations++;
        }
        return operations;
    }
};