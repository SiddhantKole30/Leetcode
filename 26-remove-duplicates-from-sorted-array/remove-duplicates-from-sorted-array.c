int removeDuplicates(int* nums, int numsSize)
{
    int i, j, k, m, alr_counted, c = 0;

    for(i = 0; i < numsSize - c; i++)
    {
        alr_counted = 0;

        for(k = 0; k < i; k++)
        {
            if(nums[i] == nums[k])
            {
                alr_counted = 1;
                break;
            }
        }

        if(alr_counted)
            continue;

        for(j = i + 1; j < numsSize - c; j++)
        {
            if(nums[i] == nums[j])
            {
                c++;

                for(m = j; m < numsSize - c; m++)
                {
                    nums[m] = nums[m + 1];
                }

                j--;  
            }
        }
    }

    return numsSize - c;
}