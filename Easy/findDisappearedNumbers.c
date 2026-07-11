/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    
   
    int* freq = calloc(numsSize + 1, sizeof(int));
    if (!freq) {
        return NULL;
    }
    for(int i=0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    int count=0;
    for(int l=1;l<=numsSize;l++){
        if(freq[l]==0){
            count++;
        }
    }
    int* result = malloc(count * sizeof(int));
    if (!result) return NULL;

    int k=0;
    for(int j=1;j<=numsSize;j++){
        if(freq[j]==0){
            result[k++]=j;
        }
    }
    *returnSize = count;
    return result;
}
