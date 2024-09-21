#include <vector>
using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector <int> lex;
        int curr = 1;

        for (int i = 1; i <= n; i++)
        {
            lex.push_back(curr);
            if (curr*10<=n)
            {
                curr = curr*10;
            }
            else 
            {
                while (curr%10==9 || curr >= n)
                {
                    curr = curr/10;
                }
                curr += 1;
            }
        }
        return lex;
    }
};