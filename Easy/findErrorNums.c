/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int* result = malloc(2 * sizeof(int));
    if (!result) {
        return NULL;
    }

    int* freq = calloc(numsSize + 1, sizeof(int));
    if (!freq) {
        free(result);
        return NULL;
    }
    for (int i = 0; i < numsSize; i++) {
         freq[nums[i]]++;
    }
    int dup = -1;
    int miss = -1;
    for (int i = 1; i <= numsSize; i++) {
        if (freq[i] == 0) {
            miss = i;
        } else if (freq[i] == 2) {
            dup = i;
        }
    }
    result[0] = dup;
    result[1] = miss;

    free(freq);
    return result;
}
