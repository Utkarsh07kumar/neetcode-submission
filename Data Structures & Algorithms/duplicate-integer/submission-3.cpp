class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for (auto num:nums){
            if(count[num]>0) return true;
            count[num]++;
        }
        return false;
    }
};