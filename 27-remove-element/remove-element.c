int removeElement(int* nums, int numsSize, int val)
{
    int i,j,c=0;

    for(i=0;i<numsSize-c;i++)
    {
        if(nums[i]==val)
        {
            c++;

            for(j=i;j<numsSize-1;j++)
            nums[j]=nums[j+1];

            i--;
        }
    }

    return numsSize-c;
}