class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedstr = "";

        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            string temp = "";

            // Atbash encode
            for (char ch : str) {
                if (islower(ch)) {
                    temp += char('z' - (ch - 'a'));
                } 
                else if (isupper(ch)) {
                    temp += char('Z' - (ch - 'A'));
                } 
                else {
                    temp += ch;
                }
            }

            // len + # + encoded string
            encodedstr += to_string(temp.size()) + "#" + temp;
        }

        return encodedstr;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            int len = 0;

            // read length
            while (s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }
            i++; // skip '#'

            string current = "";

            // read encoded string of length len
            for (int j = 0; j < len; j++) {
                char ch = s[i++];

                if (islower(ch)) {
                    current += char('z' - (ch - 'a'));
                } 
                else if (isupper(ch)) {
                    current += char('Z' - (ch - 'A'));
                } 
                else {
                    current += ch;
                }
            }

            ans.push_back(current); // push even empty string
        }

        return ans;
    }
};
