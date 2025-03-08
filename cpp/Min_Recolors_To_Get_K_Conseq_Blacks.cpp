#include <climits>
#include <string>

using namespace std;
class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int min = INT_MAX, whites = 0;
            for (int i = 0; i < blocks.size()-k+1; i++)
            {
                whites = 0;
                for (int j = i; j < i+k; j++)
                {
                    if (blocks.at(j)!='B')
                    {   
                        whites += 1;
                    }
                }
                if (min > whites)
                {
                    min = whites;
                }
            }
            return min;
        }
    };