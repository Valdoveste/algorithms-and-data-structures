#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main()
{

    int nums[2] = {3, 3};
    int numsSize = 2;
    int target = 6;
    int returnSize[2];

    printf("%n,", twoSum(nums, numsSize, target, returnSize));

    return 0;
}

/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i = 0;
    int j = 1;

    while (i < numsSize)
    {
        while (j < numsSize)
        {
            if ((nums[i] + nums[j]) == target)
            {
                int *res = (int *)malloc(2 * sizeof(int));
                res[0] = i;
                res[1] = j;
                *returnSize = 2;

                return res;
            }
            j++;
        }
        i++;
        j = (i + 1);
    }
    
    return returnSize;
}
