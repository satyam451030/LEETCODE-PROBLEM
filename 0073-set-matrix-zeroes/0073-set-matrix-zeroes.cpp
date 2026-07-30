class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int pr = -9999999;

        for(int i = 0;i < rows;i++){
            for(int j = 0;j < cols;j++){
                if(matrix[i][j] == 0){

             for(int j = 0;j < cols;j++){
                if(matrix[i][j] != 0){
                matrix[i][j] = pr;
            }
        }

           for(int i = 0;i < rows;i++){
                if(matrix[i][j] != 0){
                matrix[i][j] = pr;
            }
        }
                }
            }
        }
        
 for(int i = 0; i < rows;i++){
    for(int j = 0;j < cols;j++){
        if(matrix[i][j] == pr){
        matrix[i][j] = 0;
        }
    }
 }

    }
};