#include <stdio.h>
#include <unistd.h>

int search(int *nums, int numsSize, int target);
// int searchInsert(int *nums, int numsSize, int target);

int main()
{
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums);
    int target = -1;

    int r = search(nums, numsSize, target);
    printf(" search return: %d", r);

    return 0;
}

int search(int *nums, int numsSize, int target)
{
    int lowest = 0;
    int highest = (numsSize - 1);
    int mid;

    while(lowest <= highest)
    {
        mid = highest + (lowest - highest) / 2;

        if (target == nums[mid])
            return mid;

        if (target > nums[mid])
            lowest = (mid + 1);
        else
            highest = (mid - 1);
    }

    return -1;
}
