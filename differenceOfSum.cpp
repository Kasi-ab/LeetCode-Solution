class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int esum=0;
        int dsum=0;
        for(int i=0;i<n;i++){
           esum+=nums[i];
        }
        for(int i=0;i<n;i++){
            int k=nums[i];
            while(k > 0){
             dsum += k % 10;  
              k /= 10;        
            }
        }
        int output=abs(esum-dsum);
        return output;
    }
};
