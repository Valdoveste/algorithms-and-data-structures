/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_sort(int *nums, int numsSize);
int *sortedSquares(int *nums, int numsSize, int *returnSize);

int main()
{
    // int i = 0;
    int nums[] = {-4,-1,0,3,10};
    int numsSize = (sizeof(nums) / sizeof(nums[0]));
    int *returnSize = (int*) malloc(numsSize * sizeof(int));


    sortedSquares(nums, numsSize, returnSize);
    // ft_sort(returnSize);
    int r = returnSize
    printf("size: %d", );


    // while(i < numsSize)
    // {
    //     printf("%d, ", returnSize[i]);
    //     i++;
    // }

    return 0;
}

int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    int i = 0;
    while (i < numsSize)
    {
        returnSize[i] = (nums[i] * nums[i]);
        i++;
    }

    ft_sort(returnSize, numsSize);

    return returnSize;
}

int *ft_sort(int *nums, int numsSize){
	int		i;
	int 	j;
	int		buff;

	i = 0;
	j = 1;
	buff = 0;

	while(numsSize > i){
		while(numsSize  > j){
			if(nums[i] < nums[j]){
				buff = nums[i];
				nums[i] = nums[j];
				nums[j] = buff;
			}
			j++;
		}
		i++;
		j = 0;
	}

    return nums;
}