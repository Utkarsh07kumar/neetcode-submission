class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> numcount;
        for(auto num:nums){
            if(numcount[num]>0) return true;
            numcount[num]++;
        }
        return false;
    }
};