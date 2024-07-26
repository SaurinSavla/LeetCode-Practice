class Solution {
    public int thirdMax(int[] nums) {
        // int firstMax = 0, secondMax = 0, thirdMax = 0;
        
        Integer max1 = null;
        Integer max2 = null;
        Integer max3 = null;

        for (Integer num : nums) {
            if (num.equals(max1) || num.equals(max2) || num.equals(max3)) {
                continue;
            }

            if (max1 == null || num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (max2 == null || num > max2) {
                max3 = max2;
                max2 = num;
            } else if (max3 == null || num > max3) {
                max3 = num;
            }
        }

        if (max3 == null) {
            return max1;
        }
        else return max3;
        
        // for (int i = 0; i < nums.length; i++) {
        //     if (nums[i] > firstMax) {
        //         firstMax = nums[i];
        //     }
        //     else if (nums[i] > secondMax && nums[i] != firstMax) {
        //         secondMax = nums[i];
        //     }
        //     else if (nums[i] > thirdMax && nums[i] != secondMax) {
        //         thirdMax = nums[i];
        //     }
        // }
        // if (thirdMax == 0 || thirdMax == secondMax) return firstMax;
        // return thirdMax;
    }
}