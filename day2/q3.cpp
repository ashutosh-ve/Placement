class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        vector<int >ans;
        for(int i=0;i<n;i++){
        int count=0; 
        for(auto it: m){
         if(it.first<nums[i])
            count+=it.second;
    
        }
            ans.push_back(count);
        }
        return ans;
    }
};
