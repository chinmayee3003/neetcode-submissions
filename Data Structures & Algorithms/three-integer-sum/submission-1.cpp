class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
             int left=i+1;
             int right=n-1;
             if(i>0 && nums[i]==nums[i-1]){
                continue;
             }
        while(left<right){
             int sum= nums[i]+nums[left]+nums[right];
            if(sum==0){
                ans.push_back({nums[i],nums[left],nums[right]});
               int l=nums[left];
               int r=nums[right];
                 while(left<right && nums[left]== l){
                 left++;
                }
                 while(left<right && nums[right]== r){
                 right--;
                }
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
        }
        }
        return ans;
        
    }
};
