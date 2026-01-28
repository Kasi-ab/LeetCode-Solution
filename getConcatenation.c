/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2*numsSize;  
    int* ans = malloc((*returnSize) * sizeof(int));
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[i];
    }
    for(int i=numsSize;i<2*numsSize;i++){
        ans[i]=nums[i-numsSize];
    }
    return ans;
}
