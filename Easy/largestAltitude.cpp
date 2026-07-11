class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> alt(n+1,0);
        int max=0;
        for(int i=0;i<n;i++){
               alt[i+1]=alt[i]+gain[i];
               if(max<alt[i+1]){max=alt[i+1];}
        }
        return max;
    }
};
