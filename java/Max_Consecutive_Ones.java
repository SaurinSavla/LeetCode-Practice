class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int k = 0;
        int max = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                k++;
            }
            else if (nums[i] == 0) {
                k = 0;
            }
            if (max <= k) {
                max = k;
            }
        }
        return max;
    }
}