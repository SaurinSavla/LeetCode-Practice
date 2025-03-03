#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> small;
            vector<int> big;
            int k = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i]==pivot)
                {
                    k++;
                }
                else if (nums[i]<pivot)
                {
                    small.push_back(nums[i]);
                }
                else
                {
                    big.push_back(nums[i]);
                }
            }
            for (int i = 0; i < k; i++)
            {
                small.push_back(pivot);
            }
            for (int i = 0; i < big.size(); i++)
            {
                small.push_back(big[i]);
            }
            return small;
        }
    };