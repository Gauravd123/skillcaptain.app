class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
         int ans=INT_MAX;

        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            

             if(abs(n)-0 <  abs(ans) || abs(ans)==nums[i])
             {
                 ans=n;
             }
        }

        return ans;
    }
};
