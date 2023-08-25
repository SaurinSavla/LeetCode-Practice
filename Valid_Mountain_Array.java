class Solution {
    public boolean validMountainArray(int[] arr) {
        int max = 0;
        int k = 0;
        
        if (arr.length < 3)
            return false;
            
        
        for (int i = 0; i< arr.length; i++) {
            if(arr[i] > max) {
                max = arr[i];
                k = i;
            }
        }
        
        if(k == arr.length-1 || k == 0) return false;
        
        boolean b = true;
        boolean c = true;
        for (int i = 1; i<=k ; i++) {
            if(arr[i] > arr[i-1]) {
                continue;
            }
            else{
                b = false;
                break;
            }
        }
        if(b) {
            for (int i = k+1; i < arr.length; i++) {
                if(arr[i] < arr[i-1]) {
                    continue;
                }
                else {
                    b = false;
                    break;
                }
            }
        }
        return b;
    }
}