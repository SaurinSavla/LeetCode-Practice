#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        vector<int> sol (n+1,INT_MAX);
        sol[0] = 0;

        for (int i = 1; i <= n; i++ )
        {
            int w = books[i-1][0], h = books[i-1][1];

            sol[i] = sol[i-1] + h;

            for (int j=i-1; j>0; j--)
            {

                if ( w+books[j-1][0] <= shelfWidth)
                {
                    h = max(h, books[j-1][1] );
                    w += books[j-1][0];
                    sol[i] =  min(sol[i], sol[j-1] + h); 
                }
                else 
                {
                    break;
                }
            }
            



        }
        return sol[n];


    }
};