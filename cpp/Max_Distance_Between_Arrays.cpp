#include <vector>
#include <limits.h>
#include <climits>
#include <math.h>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i < arrays.size(); i++)
        {
            for (int j = 0; j < arrays[i].size(); j++)
            {
                if (arrays[i][j] > max){
                    max = arrays[i][j];
                    cout << max << endl;
                }
                if (arrays[i][j] < min)
                {
                    min = arrays[i][j];
                    cout << min << endl;
                }
            }
        }
        return abs(max-min);
    }
    
};
int main()
{
    Solution sol;
    vector<vector<int>> arrays = {{1}, {2}};
    int val = sol.maxDistance(arrays);
    cout<<val;
    return 0;

}