
class Solution {
public:
    bool isPalindrome(string str) {
        string filterStr="";
        // clear space and other val
        for(int i=0; str[i]!= '\0'; i++){
            if((str[i] >= 'A' && str[i] <= 'Z')     || 
                (str[i] >= 'a' && str[i] <= 'z') ||   
                (str[i] >= '0' && str[i] <= '9')){
                filterStr+=str[i];
            }
        }
        int j=filterStr.length()-1;
        int k=0;
        // checking if pallindrome
        while(k<=j){
            
            if ((filterStr[k] >= 'A' && filterStr[k] <= 'Z' ? filterStr[k] + 32 : filterStr[k]) == 
                (filterStr[j] >= 'A' && filterStr[j] <= 'Z' ? filterStr[j] + 32 : filterStr[j])){
                k++;j--;
            }
            else return false;
        }
        return true;
    }
};
