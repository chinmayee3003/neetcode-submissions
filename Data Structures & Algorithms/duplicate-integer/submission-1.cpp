class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>uni;
        for(int i=0;i<n;i++){
         if(uni.find(nums[i])!=uni.end()){
                return true;
         }   
          uni.insert(nums[i]);
        
        }
        return false;
    }
};