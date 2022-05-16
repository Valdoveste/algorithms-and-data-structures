#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// int quickFind(int *nums, int numsSize);
void moveZeroes(int *nums, int numsSize);

int main()
{
    int nums[] = {4, 2, 4, 0, 0};
    int numsSize = (sizeof(nums) / sizeof(nums[0]));

    int k = 0;
    while (k < numsSize)
    {
        printf("%d, ", nums[k]);
        k++;
    }
    printf("\n");

    moveZeroes(nums, numsSize);

    // int k = 0;
    // while (k < numsSize)
    // {
    //     printf("%d, ", nums[k]);
    //     k++;
    // }

    return 0;
}

void moveZeroes(int *nums, int numsSize)
{
    int i = 0;
    int j = 0;
    int swap = 0;

    while (i < numsSize)
    {
        while (j < numsSize)
        {
            if (nums[j] == 0 && nums[i] != 0)
            {
                swap = nums[i];
                nums[i] = nums[j];
                nums[j] = swap;
            }
            j++;
        }
        i++;
        j = 0;

        int k = 0;
        while (k < numsSize)
        {
            printf("%d, ", nums[k]);
            k++;
        }
        printf("\n");
    }
}

// int quickFind(int *nums, int numsSize)
// {
//     int i = 0;
//     int nz = 0;

//     while (i < numsSize)
//     {
//         if (nums[i] == 0)
//             nz++;

//         i++;
//     }

//     return nz;
// }

// void moveZeroes(int *nums, int numsSize)
// {
//     int i = 0;
//     int j = 1;
//     int swap = 0;
//     int nz = quickFind(nums, numsSize);

//     while (i <= nz)
//     {

//         if (nums[i] == 0 && nums[(numsSize - j)] != 0 && nums[i + 1] != 0)
//         {
//             swap = nums[(numsSize - j)];
//             nums[(numsSize - j)] = nums[i];
//             nums[i] = swap;
//             j++;
//         }
//         i++;
//     }
// }