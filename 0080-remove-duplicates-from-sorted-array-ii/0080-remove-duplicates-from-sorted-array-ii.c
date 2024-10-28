int removeDuplicates(int* nums, int numsSize)
{
    int i;
    int k;

    i = 2;
    k = 2;
    if (numsSize <= 2)
    {
        return (numsSize);
    }

    while (i < numsSize)
    {
        if (nums[i] != nums[k - 2])
        {
            nums[k] = nums[i];
            k++;
        }
        i++;
    }
    return (k);
}