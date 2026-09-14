int searchInsert(int* nums, int numsSize, int target)
{
    int i,j;
    int index=0;

    if(target<=nums[0])
    return 0;

    for(i=0;i<numsSize-1;i++)
    {
        if(target>nums[i] && target<=nums[i+1])
        return index+1;
    
        index++;
    }
    return numsSize;
}