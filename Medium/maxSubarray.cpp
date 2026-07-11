class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0], maxSum = nums[0];
    int n = nums.size();
    for(int i = 1; i < n; i++) {
        currentSum = max(currentSum + nums[i], nums[i]);
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
}
};
