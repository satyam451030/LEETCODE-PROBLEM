class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = n - 1;
        while( high >= 0 && low < m){
            if(target == matrix[low][high]){
                return true;
            }
             else if(target < matrix[low][high]){
                high--;
            }
           else{
            low++;
        }
        }
        return false;
    }
};