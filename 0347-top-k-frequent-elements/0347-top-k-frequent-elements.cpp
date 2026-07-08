class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }   
    
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto i = mp.begin(); i != mp.end(); i++){
            pq.push({i->second, i->first});
            if(pq.size() > k)
                pq.pop();
        }
       
        vector<int> ans;

        while(!pq.empty()){
            ans.push_back(pq.top().second); 
            pq.pop();
        }
        
        return ans;
    }
};