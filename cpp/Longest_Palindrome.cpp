#include <map>
#include <string>
using namespace std;
class Solution {
    public:
        int longestPalindrome(string s) {
            if (s.size() == 1) {
                return 1;
            }
            map<char , int> pal;
            for (int i = 0; i < s.size(); i++)
            {
                pal[s.at(i)]++;
            }
            int res = 0;
            bool odd=false;
            for (auto& pair : pal)
            {
                if (pair.second % 2 == 0)
                {
                    res += pair.second;
                }
                else {
    
                    res += pair.second -1;
                    odd = true;
                }
            
            }
            if (odd) {
                return res +1;
            }
            return res;
        }
    };