class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int left=0;
        int ans=0;
        for(int right=1;right<n;right++){
            if(prices[right]<prices[left]) left=right;
            else{
                int profit= prices[right]-prices[left];
                ans=max(profit,ans);
            }   
        }
        return ans;
    }
};

