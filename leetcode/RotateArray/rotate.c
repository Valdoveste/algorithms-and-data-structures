#include <stdio.h>
#include <unistd.h>

void invertArray(int *nums, int numsSize);
void rotate(int *nums, int numsSize, int k);

int main()
{

    int nums[] = {1,2,3};
    int numsSize = (sizeof(nums) / sizeof(nums[0]));
    int k = 3;

    rotate(nums, numsSize, k);

    int i = 0;
    while (i < numsSize)
    {
        printf("%d, ", nums[i]);
        i++;
    }

    return 0;
}

void rotate(int *nums, int numsSize, int k)
{
    if((numsSize - 1) == k)
        invertArray(nums, numsSize);

    if ((numsSize - 1) >= 1 && k < (numsSize))
    {
        int j = 0;
        int p = (numsSize - k);
        int i = 0;
        int aux = 0;

        while ((i < ((numsSize - k) / 2)))
        {
            aux = nums[(numsSize - (k + 1)) - i];
            nums[(numsSize - (k + 1)) - i] = nums[i];
            nums[i] = aux;
            i++;
        }

        while ((p < (numsSize - 1)))
        {
            aux = nums[(numsSize - 1) - j];
            nums[((numsSize - 1) - j)] = nums[p];
            nums[p] = aux;
            p++;
            j++;
        }
        invertArray(nums, numsSize);
    }
}

void invertArray(int *nums, int numsSize)
{
    int i = 0;
    int aux = 0;

    while ((i < (numsSize / 2)))
    {
        aux = nums[((numsSize - 1) - i)];
        nums[((numsSize - 1) - i)] = nums[i];
        nums[i] = aux;
        i++;
    }
}

// void rotate(int *nums, int numsSize, int k)
// {
//     int j = 1;
//     int x = 0;
//     int aux = 0;
//     int i = numsSize - 1;

//     while (k > 0)
//     {
//         while (x < i)
//         {
//             aux = nums[i - x];
//             nums[i - x] = nums[i - j];
//             nums[i - j] = aux;
//             x++;
//             j++;
//         }
//         x = 0;
//         j = 1;
//         i = numsSize - 1;
//         k--;
//     }
// }

// void rotate(int *nums, int numsSize, int k)
// {
//     int j = 0;
//     int i = 0;
//     int p = 0;
//     int arrAux[numsSize];

//     while (i < numsSize)
//     {
//         arrAux[i] = nums[(numsSize - (k + 1)) - i];
//         i++;
//     }

//     while (j < (numsSize - k))
//     {
//         nums[j] = arrAux[j];
//         j++;
//     }

//     while (j == 3)
//     {
//         arrAux[numsSize - j] = nums[];
//     }

//     int y = 0;
//     while (y < numsSize)
//     {
//         printf("%d, ", nums[y]);
//         y++;
//     }
// }

// void rotate(int *nums, int numsSize, int k)
// {
//     int j = 0;
//     int i = 0;
//     int p = (numsSize - k);
//     int aux = 0;
//     int y = 0;
//     // int arrAux[numsSize];

//     while (i < ((numsSize - k) / 2))
//     {
//         aux = nums[(numsSize - (k + 1)) - i];
//         nums[(numsSize - (k + 1)) - i] = nums[i];
//         nums[i] = aux;
//         i++;

//         while (y < numsSize)
//         {
//             printf("%d, ", nums[y]);
//             y++;
//         }
//         printf("\n");
//         y = 0;
//     }

//     printf("\n\n");
//     i = 0;
//     while (p < (numsSize - 1))
//     {
//         aux = nums[(numsSize - 1) - i];
//         nums[((numsSize - 1) - i)] = nums[p];
//         nums[p] = aux;
//         p++;
//         i++;

//         while (y < numsSize)
//         {
//             printf("%d, ", nums[y]);
//             y++;
//         }
//         printf("\n");
//     }

//     printf("\n\n");
//     while (j < (numsSize / 2))
//     {
//         aux = nums[((numsSize - 1) - j)];
//         nums[((numsSize - 1) - j)] = nums[j];
//         nums[j] = aux;
//         j++;

//         while (y < numsSize)
//         {
//             printf("%d, ", nums[y]);
//             y++;
//         }
//         printf("\n");
//         y = 0;
//     }
// }
