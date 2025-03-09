#include <vector>
using namespace std;
class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            vector<int> circle = colors;
            int t = 0;
            int count = 0;
            for (int i = 0; i < k-1; i++)
            {
                circle.push_back(colors[i]);
            }
            // for (int i = 0; i < circle.size()-k+1; i++)
            // {
            //     for (int j = i+1; j < i+k; j++)
            //     {
            //         if (circle[j-1]==circle[j])
            //         {
            //             t = 1;
            //         }
            //     }
            //     if (t==0)
            //     {
            //         count++;
            //     }
            //     t = 0;
            // }
            // return count;
            int left = 0;
            for (int right = 0; right < circle.size(); right++)
            {
                if (right > 0 && circle[right] == circle[right-1])
                {
                    left = right;
                }
                if (right - left + 1 >= k)
                {
                    count++;
                }
            }
    
            return count;
        }
    };