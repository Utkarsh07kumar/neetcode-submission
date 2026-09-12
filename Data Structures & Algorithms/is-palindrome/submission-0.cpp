
class Solution {
public:
    bool isPalindrome(string str) {
        string filterStr="";
        // clear space
        for(int i=0; str[i]!= '\0'; i++){
            if(isalnum(str[i])){
                filterStr+=str[i];
            }
        }
        cout<<filterStr<<endl;
        int j=filterStr.length()-1;
        int k=0;
        // checking if pallindrome
        while(k<=j){
            if(tolower(filterStr[k])==tolower(filterStr[j])){
                k++;j--;
            }
            else return false;
        }
        return true;
    }
};
