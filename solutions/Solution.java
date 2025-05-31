package solutions;

public class Solution {
    public int findKthLargest(int[] nums, int k) {
        int minNums = Integer.MAX_VALUE, maxNums = Integer.MIN_VALUE;
        for (int i : nums) {
            minNums = Math.min(minNums, i);
            maxNums = Math.max(maxNums, i);
        }
        int[] counts = new int[maxNums - minNums + 1];
        for (int i : nums) {
            counts[i - minNums]++;
        }
        for (int i = counts.length - 1; i >= 0; i--) {
            k -= counts[i];
            if (k <= 0) {
                return i + minNums;
            }
        }
        return 0;
    }
    // write your code here
}
