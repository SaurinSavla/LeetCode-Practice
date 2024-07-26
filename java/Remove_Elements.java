class Solution {
    public int removeElement(int[] nums, int val) {
        int j = 0;
        int k = 0;
        for (int i = 0; i< nums.length; i++) {
            if(nums[i] == val) {
                j++;
                continue;
            }
            else {
                nums[k] = nums[j++];
                k++;
            }
        }
        return k;
    }
}