#include <iostream>
#include <vector>
#include "../solutions/solution.cpp"
using namespace std;

bool runTest(vector<int> nums, int k, int expected)
{
    Solution sol;
    int result = sol.findKthLargest(nums, k);
    cout << "Input: [";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i < nums.size() - 1)
            cout << ", ";
    }
    cout << "], k = " << k << endl;
    cout << "Expected: " << expected << ", Got: " << result << endl;
    return result == expected;
}

int main()
{
    int failed = 0;
    failed += !runTest({3, 2, 1, 5, 6, 4}, 2, 5);
    failed += !runTest({3, 2, 3, 1, 2, 4, 5, 5, 6}, 4, 4);
    failed += !runTest({1}, 1, 1);
    failed += !runTest({7, 10, 4, 3, 20, 15}, 3, 10);
    failed += !runTest({5, 5, 5, 5, 5}, 2, 5);
    failed += !runTest({-1, -2, -3, -4, -5}, 1, -1);
    failed += !runTest({2, 1}, 2, 1);
    failed += !runTest({7, 6, 5, 4, 3, 2, 1}, 5, 3);

    cout << (failed ? "❌ Tests Failed" : "✅ All Passed") << endl;
    return failed;
}
