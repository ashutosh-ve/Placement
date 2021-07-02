class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        map<int ,int>ans;
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                ans[nums1[i]]++;
                i++;
                j++;
            }
            else{
                if(nums1[i]<nums2[j]){
                    i++;
                }
                else
                    j++;
            }
            
        }
        vector<int>ret;
        for(auto it: ans){
            ret.push_back(it.first);
        }
        return ret;
    }
};