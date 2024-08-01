#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> zz(numRows);
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        int id = 0, d = 1;
        

        for (char c : s) {
            zz[id].push_back(c);
            if (id == 0) {
                d = 1;
            } else if (id == numRows - 1) {
                d = -1;
            }
            id += d;
        }

        string result;
        for (const auto& row : zz) {
            for (char c : row) {
                result += c;
            }
        }

        return result;        
    }
};