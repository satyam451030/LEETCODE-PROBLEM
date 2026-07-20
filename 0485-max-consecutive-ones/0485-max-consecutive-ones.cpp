class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen = 0;
        int currentConsecutiveOnes = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentConsecutiveOnes++;
                maxlen = max(maxlen, currentConsecutiveOnes);
            } else {
                currentConsecutiveOnes = 0;
            }
        }

        return maxlen;
    }
};