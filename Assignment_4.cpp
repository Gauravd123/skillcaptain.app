class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        int sum=0;
        for(int row=0;row<accounts.size();row++)
        {
            for(int col=0;col<accounts[row].size();col++)
            {
                sum+=accounts[row][col];
            }
            if(sum>maxWealth)
              maxWealth=sum;
            sum=0;  
        }

        return maxWealth;
    }
};
