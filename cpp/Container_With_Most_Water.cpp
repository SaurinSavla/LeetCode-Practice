#include <vector>
#include <algorithm>

using namespace std;
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int maxArea = 0;
            int water;
    
            int left = 0;
            int right = height.size() - 1;
            while(left<right)
            {
                maxArea = max(maxArea, (right - left) * min(height[left], height[right]));
                if (height[left] < height[right])
                {
                    left++;
                }
                else 
                {
                    right--;
                }
            }
            // for (int i = 0; i < height.size() - 1; i++)
            // {
            //     for ( int j = i+1; j < height.size(); j++)
            //     {
            //         min = (height[i] < height[j])? height[i] : height[j];
            //         water = (j - i) * min;
            //         if (max < water)
            //         {
            //             max = water;
            //         }
            //     }
            // }   
            return maxArea;
        }
    };