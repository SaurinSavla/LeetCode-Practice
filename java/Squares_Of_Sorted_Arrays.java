class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;
        int pp = 0; 
        while (pp < n && nums[pp] < 0) {
            pp++;
        }
        int nn = pp - 1;
        int [] squares = new int[n];
        int count = 0;
        
        while(nn >= 0 && pp < n) {
            if (nums[nn] * nums[nn] < nums[pp] * nums[pp]) {
                squares[count] = nums[nn] * nums[nn];
                nn--;
            }
            else {
                squares[count] = nums[pp] * nums[pp];
                pp++;
            }
            count+=1;
        }
        while (nn >= 0){
            squares[count] = nums[nn] * nums[nn];
            nn--;
            count += 1;
        }
        while (pp < n){
            squares[count] = nums[pp] * nums[pp];
            pp++;
            count += 1;
        }
        return squares;
    }
}