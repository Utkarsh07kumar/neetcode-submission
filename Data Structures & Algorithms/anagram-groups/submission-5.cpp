class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto str:strs){
            string s=str;
            vector<int>arr(26,0);
            for(auto s1:s){
                arr[s1-'a']++;
            }
            string temp="";
            for(int i=0;i<arr.size();i++){
                temp+=to_string(arr[i])+"#";
            }
            mp[temp].push_back(s);
            cout<<temp<<endl;
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
        
    }
};
