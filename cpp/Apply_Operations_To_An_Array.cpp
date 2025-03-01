#include <vector> 
using namespace std;
class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            for (int i = 0; i < n-1; i++)
            {
                if (nums[i] == nums[i+1])
                {
                    nums[i] = nums[i] * 2;
                    nums[i+1] = 0;
                    i++;
                }
            }
            int left = 0;
            for (int right = 0; right < n; right++)
            {
                if (nums[right] != 0)
                {
                    swap(nums[left], nums[right]);
                    left++;
                }
            }
            return nums;
            
        }
    };