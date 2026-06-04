class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int l=pref.length();
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
           string m=words[i];
           string s=m.substr(0,l);
           if(s==pref){
             count++;
           }
        }
        return count;
    }
};
