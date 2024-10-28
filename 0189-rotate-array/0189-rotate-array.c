void rotate(int* nums, int numsSize, int k)
{
    int temp[numsSize];
    int i;
    int j;

    j = 0;
    i = 0;
    k = k % numsSize;
    while (i < k)
    {
        temp[i] = nums[numsSize - k + i];
        i++;
    }
    while (i < numsSize)
    {
        temp[i] = nums[j];
        i++;
        j++;
    }
    i = 0;
    while (i < numsSize)
    {
        nums[i] = temp[i];
        i++;
    }
}