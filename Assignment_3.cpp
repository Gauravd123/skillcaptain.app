class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int ans=INT_MAX;

        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            

             if(abs(n)-0 <=  abs(ans))
             {
                 ans=n;
             }
        }

        return ans;
    }
};
