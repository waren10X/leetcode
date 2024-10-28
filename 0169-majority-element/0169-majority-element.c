int majorityElement(int* nums, int numsSize)
{
    int candidate;
    int count;
    int i;

    candidate = 0;
    count = 0;
    i = 0;
    while (i < numsSize)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
        i++;
    }
    return (candidate);
}