int removeDuplicates(int* nums, int numsSize)
{
    int i;
    int k;

    i = 1;
    k = 1;
    if (numsSize == 0)
    {
        return (0);
    }
    while (i < numsSize)
    {
        if (nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
        i++;
    }
    return (k);
}