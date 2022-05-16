#include <stdio.h>
#include <unistd.h>

// arr = [2,4,5,5,5,5,5,7,9,9]
// target = 5
// output: [2,6]
// void rotate(int *nums, int numsSize, int k)

void firstLastIndex(int *nums, int numsSize, int target);

int main()
{

    int nums[] = {2, 4, 6, 2, 0, 0, 8, 7, 9, 9};
    int numsSize = (sizeof(nums) / sizeof(nums[0]));
    int target = 5;
    firstLastIndex(nums, numsSize, target);

    return 0;
}

// void firstLastIndex(int *nums, int numsSize, int target)
// {
//     int i = 0;
//     int left = 0;
//     int right = (numsSize - 1);

//     while (i < (numsSize - 1))
//     {
//         if (nums[left] != target)
//             left++;

//         if (nums[right] != target)
//             right--;

//         i++;
//     }

//     if(nums[left] != target && nums[right] != target)
//     {
//         left = -1;
//         right = -1;
//     }

//     printf("[%d, %d]", left, right);
// }


void firstLastIndex(int *nums, int numsSize, int target)
{
    int i = 0;
    int j = 0;
    int init = 0;

    while (i < (numsSize - 1))
    {
        if(nums[i] == target){
            
        }
    }


    printf("[%d, %d]", left, right);
}