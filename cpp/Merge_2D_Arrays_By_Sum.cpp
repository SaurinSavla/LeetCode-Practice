#include <vector>
#include <map>
using namespace std;
class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            map<int, int> res;
            for(int i = 0; i < nums1.size(); i++)
            {
                res[nums1[i][0]] = nums1[i][1];
            }
            for (int j = 0; j < nums2.size(); j++)
            {
                res[nums2[j][0]] += nums2[j][1];
            }
            vector<vector<int>> result;
            for (auto pair : res) {
                result.push_back({pair.first, pair.second});
            }
            return result;
            
        }
    };