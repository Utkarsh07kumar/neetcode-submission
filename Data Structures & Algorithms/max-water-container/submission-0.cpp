class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int len=heights[i]>heights[j]?heights[j]:heights[i];
                int bre=j-i;
                int tempAns=len*bre;
                if(tempAns>ans) ans=tempAns;
            }
        }
        return ans;
    }
};
