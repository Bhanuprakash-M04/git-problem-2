package tests;
import solutions.Solution;

public class Test {
    public static void main(String[] args) {
        int fails = 0;

        if (!runTest(new int[]{3,2,1,5,6,4}, 2, 5)) fails++;
        if (!runTest(new int[]{3,2,3,1,2,4,5,5,6}, 4, 4)) fails++;
        if (!runTest(new int[]{1}, 1, 1)) fails++;
        if (!runTest(new int[]{7,10,4,3,20,15}, 3, 10)) fails++;
        if (!runTest(new int[]{5,5,5,5,5}, 2, 5)) fails++;
        if (!runTest(new int[]{-1,-2,-3,-4,-5}, 1, -1)) fails++;
        if (!runTest(new int[]{2,1}, 2, 1)) fails++;
        if (!runTest(new int[]{7,6,5,4,3,2,1}, 5, 3)) fails++;

        if (fails > 0) {
            System.exit(1); // Fail the CI job
        }
    }

    public static boolean runTest(int[] nums, int k, int expected) {
        Solution sol = new Solution();
        int result = sol.findKthLargest(nums, k);
        System.out.println("Expected: " + expected + ", Got: " + result);
        return result == expected;
    }
}
