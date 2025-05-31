#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
int findKthLargest(int *nums, int numsSize, int k)
{
    int ans[100001] = {0};
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < numsSize; i++)
    {
        max = max > nums[i] ? max : nums[i];
        min = min > nums[i] ? nums[i] : min;
    }
    for (int i = 0; i < numsSize; i++)
        ans[nums[i] - min]++;
    for (int i = max - min; i >= 0;)
    {
        if (ans[i] > 0)
        {
            k -= 1;
            if (k == 0)
                return i + min;
            ans[i]--;
            if (ans[i] == 0)
                i--;
            else
                continue;
        }
        else if (ans[i] == 0)
            i--;
    }
    return;
}