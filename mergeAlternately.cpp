class Solution {
public:
string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int p1=0;
        int p2=0;
        string result(n+m,0);
        for(int i=0;i<n+m;i++){
             if(p1==n){
               result[i]=word2[p2];
               p2++;
               continue;
             }
             else if(p2==m){
               result[i]=word1[p1];
               p1++;
               continue;
             }
             else if(i%2==0){
               result[i]=word1[p1];
               p1++;
             }else{
               result[i]=word2[p2];
               p2++;
             }
        }
        return result;
    }
};
