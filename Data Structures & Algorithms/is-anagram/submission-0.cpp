class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>hash(256,0);
        if(s.length()!=t.length())
            return false;
        for(int i=0 ; i<s.length();i++){
            hash[s[i]]++;
            hash[t[i]]--;
        }
        for(auto i : hash){
            if(i!=0)
                return false;
        }
        return true;
    }
};
