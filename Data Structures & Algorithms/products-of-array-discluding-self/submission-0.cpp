class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1;
        int zerocount=0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zerocount++;
            else mul*=nums[i];
        }
        for(int j=0;j<nums.size();j++){
            if(zerocount>1) arr.push_back(0);
            else if(zerocount==1) arr.push_back((nums[j]==0)?mul:0);
            else arr.push_back(mul/nums[j]);      
        }
        return arr;
    }
};
