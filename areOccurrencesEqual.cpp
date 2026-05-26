class Solution {
public:
    bool areOccurrencesEqual(string s) {
          int n=s.length();
          unordered_map<char,int> freq;
          for(int i=0;i<n;i++){
             freq[s[i]]++;
          }
          int m=freq[s[0]];
          for(auto& pair :freq){
             if(m!=pair.second){
               return false;
             }
          }
          return true;
    }
};
