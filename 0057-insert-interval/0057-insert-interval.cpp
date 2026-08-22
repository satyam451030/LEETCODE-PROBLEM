class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
          vector<vector<int>> ans;

        for (auto interval : intervals) {
            // Case 1: interval is completely before newInterval
            if (interval[1] < newInterval[0]) {
                ans.push_back(interval);
            }
            // Case 2: interval is completely after newInterval
            else if (interval[0] > newInterval[1]) {
                ans.push_back(newInterval);
                // From here, newInterval has been inserted
                newInterval = interval;
            }
            // Case 3: overlapping
            else {
                newInterval[0] = min(newInterval[0], interval[0]);
                newInterval[1] = max(newInterval[1], interval[1]);
            }
        }
        // Add newInterval
        ans.push_back(newInterval);
        return ans;
    }
};