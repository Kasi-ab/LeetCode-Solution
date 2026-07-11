class Solution {
public:
int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
           int mid=(low+high)/2;
           if(nums[low] <= nums[high]){
            return nums[low];
           }
           if(nums[low] <= nums[mid]){
            low =mid+1;
          }else if(nums[mid] <= nums[high]){
            high=mid;
          }
        }
        return -1;
    }
};
