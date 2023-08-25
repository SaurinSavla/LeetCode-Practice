class Solution {
    public int findNumbers(int[] nums) {
        int num, r=0, count = 0;
        for (int i = 0; i < nums.length; i++) {
            num = nums[i];
            while(num>=1) {
                num = num/10;
                r++;
            }
            if(r%2 == 0) {
                count++;
            }
            r=0;
        }
        return count;
    }
}