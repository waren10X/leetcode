#include <stdio.h>

double findMaxAverage(int* nums, int numsSize, int k)
{
    int currentSum;
    int i;
    int maxSum;

    currentSum = 0;
    i = 0;
    while (i < k)
    {
        currentSum = currentSum + nums[i];
        i++;
    }
    maxSum = currentSum;
    while (i < numsSize)
    {
        currentSum = currentSum - nums[i - k] + nums[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        i++; 
    }
        return (double)maxSum / k;
}