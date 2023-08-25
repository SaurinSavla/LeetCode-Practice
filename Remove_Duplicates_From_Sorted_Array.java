class Solution {
    public int removeDuplicates(int[] nums) {
        int val = nums[0];
        int i = 0;
		for (int j = 0; j < nums.length; j++) {
			if (nums[i] != nums[j]) {
				
				i++;
				nums[i] = nums[j];
			}
		}
		return i + 1;
    }
}