class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> array1;
        vector<int> array2;

        array1.push_back(nums[0]);
        array2.push_back(nums[1]);

        for(int i = 2; i < nums.size();i++){
     if(array1.back() > array2.back()){
       array1.push_back(nums[i]);
     }
     else{
   array2.push_back(nums[i]);
     }
        }
     array1.insert(array1.end(), array2.begin(), array2.end());
        
        return array1;
    }
};

          
           
    

       