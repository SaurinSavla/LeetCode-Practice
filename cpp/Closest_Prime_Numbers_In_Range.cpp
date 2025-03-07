#include <vector>
#include <climits>
using namespace std;
class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            int a = -1, b = -1;
            vector<int> prime(right+1, 1);
            prime[0] = prime[1] = 0;
            for (int i = 2; i*i <= right; i++)
            {
                if (prime[i]==1)
                {
                    for (int j = i*i; j <= right; j+=i)
                    {
                        prime[j]=0;
                    }
                }
            }
            vector<int> p;
            for (int i = left; i <= right; i++)
            {
                if (prime[i]==1)
                {
                    p.push_back(i);
                }
            }
            if (p.size() < 2)
            {
                return {-1, -1};
            }
            int min_gap = INT_MAX;
            vector<int> res = {a, b};
    
            for (int i = 1; i < p.size(); i++)
            {
                int gap = p[i] - p[i-1];
                if(gap < min_gap)
                {
                    min_gap = gap;
                    res = {p[i-1], p[i]};
                }
            }
            return res;
        }
    };