class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        int i=0;
        int j=n-1;
        while(i<j){
                int len=min(heights[i],heights[j]);
                int bre=j-i;
                int tempAns=len*bre;
                if(tempAns>ans) ans=tempAns;
                if(heights[i]<heights[j]) i++;
                else j--;
            }
        return ans;
    }
};
