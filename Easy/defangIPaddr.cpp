class Solution {
public:
    string defangIPaddr(string address) {
        string output;
        int n=address.length();
        for(int i=0;i<n;i++){
           if(address[i]=='.'){
              output.append("[.]");
           }else{
              output+=address[i];
           }
        }
        return output;
    }
};
