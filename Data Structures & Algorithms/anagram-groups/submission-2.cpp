class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto str:strs){
            string s=str;
            vector<int>arr(26,0);
            for(auto s1 : s){
                arr[s1-'a']++;
            }
            string hash ="";
            for(int i=0;i<arr.size();i++){
                hash = hash + to_string(arr[i]) +"#";
            }
            mp[hash].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto j : mp){
            ans.push_back(j.second);
        }
        return ans;
    }
};
