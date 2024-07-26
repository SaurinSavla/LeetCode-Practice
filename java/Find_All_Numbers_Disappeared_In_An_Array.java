import java.util.List;
import java.util.ArrayList;

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> result = new ArrayList<>();
        
        for (int num : nums) {
            int index = Math.abs(num) - 1; // Get the corresponding index
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        // for (int i = 0; i<nums.length; i++) {
        //     int index = Math.abs(nums[i]) - 1;
        //     nums[index] = -nums[index];
        // }
        
        for (int i = 0; i< nums.length; i++) {
            if (nums[i] > 0) {
                result.add(i+1);
            }
        }
        return result;
        
        // for (int i = 0; i<nums.length; i++) 
        // {
        //     result.add(i);
        // }
        // for (int i = 0; i< nums.length; i++)
        // {
        //     result.remove(Integer.valueOf(i));
        // }
    }
}