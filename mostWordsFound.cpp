class Solution {
public:
int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max=0;
        for(int i=0;i<n;i++){
           int count=0;
           string l=sentences[i];
           int m=l.length();
           for(int j=0;j<m;j++){
              if(l[j]==' '){
                count++;
              }
           }
           if(count>max){
             max=count;
           }
        }
        return max+1;
    }
};
