#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../solutions/solution.c"

bool runTest(int *nums, int size, int k, int expected)
{
    int result = findKthLargest(nums, size, k);
    printf("Input: [");
    for (int i = 0; i < size; i++)
    {
        printf("%d", nums[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("], k = %d\n", k);
    printf("Expected: %d, Got: %d\n", expected, result);
    return result == expected;
}

int main()
{
    int failed = 0;

    int nums1[] = {3, 2, 1, 5, 6, 4};
    int nums2[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int nums3[] = {1};
    int nums4[] = {7, 10, 4, 3, 20, 15};
    int nums5[] = {5, 5, 5, 5, 5};
    int nums6[] = {-1, -2, -3, -4, -5};
    int nums7[] = {2, 1};
    int nums8[] = {7, 6, 5, 4, 3, 2, 1};

    failed += !runTest(nums1, 6, 2, 5);
    failed += !runTest(nums2, 9, 4, 4);
    failed += !runTest(nums3, 1, 1, 1);
    failed += !runTest(nums4, 6, 3, 10);
    failed += !runTest(nums5, 5, 2, 5);
    failed += !runTest(nums6, 5, 1, -1);
    failed += !runTest(nums7, 2, 2, 1);
    failed += !runTest(nums8, 7, 5, 3);

    printf("Tests %s\n", failed ? "❌ Failed" : "✅ Passed");
    return failed;
}
