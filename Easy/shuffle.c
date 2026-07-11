

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int* result = malloc((*returnSize) * sizeof(int));
    int mid=numsSize/2;
    for(int i=0;i<numsSize;i++){
        if((i+1)%2!=0){
            result[i]=nums[i/2];
        }
        else{
            result[i]=nums[mid+i/2];
        }
    }
    return result;
}
