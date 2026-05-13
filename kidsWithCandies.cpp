class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxVal=0;
        vector<bool> result(n,false);
        for(int i=0;i<n;i++){
           if(candies[i]>maxVal){
               maxVal=candies[i];
           }
        }
        for(int i=0;i<n;i++){
                int temp=extraCandies+candies[i];
              if(maxVal<=temp){
                 result[i]=true; 
               }
        }
        return result;
    }
};
