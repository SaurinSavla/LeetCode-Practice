#include <string>
using namespace std;
class Solution {
public:
    int minimumDeletions(string s) {
        int k = 0;
        int ans = 0;
        for (int i=0; i < s.length(); i++)
        {
            if (s[i] == 'b')
            {
                k++;
            }
            else if (k)
            {
                ans++;
                k--;
            }
        }
        return ans;
    }
};