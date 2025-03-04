class Solution {
    public:
        bool checkPowersOfThree(int n) {
            int rem = 0;
            while (n>1)
            {
                if (n%3==2)
                {
                    return false;
                }
                else if (n%3==0 || n%3 == 1)
                {
                    n = n/3;
                }
            }
            return true;
        }
    };