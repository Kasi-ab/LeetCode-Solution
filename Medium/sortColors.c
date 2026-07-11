void sortColors(int* nums, int numsSize) {
    int min;
    int temp;
    for(int i=0;i<numsSize;i++){
        min= i;
        for(int j=i+1;j<numsSize;j++){
            if(nums[min]>nums[j]){
                min=j;
            }
        }
        temp=nums[min];
        nums[min]=nums[i];
        nums[i]=temp;
    }
    
}
