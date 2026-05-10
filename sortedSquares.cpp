class Solution {
public:

vector<int> sortedSquares(vector<int>& nums) {
       int n=nums.size();
       vector<int> result(n, 0);
       int left=0;
       int right=n-1;
       for(int i=0;i<n;i++){
          nums[i]=nums[i]*nums[i];
       }
       while(left<=right){
          if(nums[left]>nums[right]){
            result[n-1]=nums[left];
            left++;
            n--;
          }else{
            result[n-1]=nums[right];
            right--;
            n--;
          }
       }
       return result;
    }
};
