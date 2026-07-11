class Solution {
public:
    string truncateSentence(string s, int k) {
       int count=0;
       int l=s.length();
       
        for(int i=0;i<l;i++){
              if(s[i]==' '){
                count++;
              }
             if (count==k){
                    string output=s.substr(0,i);
        return output;
              }
         }
        
        return s;
    }
};
