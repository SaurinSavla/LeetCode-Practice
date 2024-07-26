class Solution {
    public int[] replaceElements(int[] arr) {
        int max = -1;
        int result [] = new int [arr.length];
        for (int i = 0; i < arr.length-1; i++) 
        {
            for (int j = i+1; j < arr.length; j++) 
            {
                
                if ( max <= arr[j]) {
                    max = arr[j];
                }
                if (j == arr.length-1) {
                    result[j] = -1;
                }
            }
            result[i] = max;
            max = -1;
        }
        if (arr.length == 1) {
            result[0] = -1;
        }
        return result;
    }
}