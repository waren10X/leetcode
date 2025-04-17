int count;
int i;
int j;

int countPairs(int* nums, int numsSize, int k)
{
    count = 0;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                if ((i * j) % k == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}