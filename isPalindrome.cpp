class Solution {
public:
    bool isPalindrome(string s) {
        int low=0;
        int up= s.length()-1;
        while(low<=up){
           if(!isalnum(s[low])){
                low++;      
           }
           else if(!isalnum(s[up])){
                up--;      
           }else{
                if(tolower(s[low]) != tolower(s[up])){
                    return false;
                }
                else{
                    low++;
                    up--;
                }
           }
        }
        return true;
    }
};
