#include <vector>
using namespace std;

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prev(n);
        vector<int> res(queries.size());

        prev[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prev[i] = prev[i - 1] ^ arr[i];
        }

        for (int i = 0; i < queries.size(); i++) {
            int left = queries[i][0];
            int right = queries[i][1];
            if (left == 0) {
                res[i] = prev[right];
            } else {
                res[i] = prev[right] ^ prev[left - 1];
            }
        }
        return res;
    }
    
};