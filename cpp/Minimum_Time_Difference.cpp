#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector <int> minutes(n);
        int total_minutes;
        string hours, minute;
        for (int i = 0; i < n; i++)
        {   
            hours = timePoints[i].substr(0,2);
            minute = timePoints[i].substr(3,2);
            total_minutes = 60 * (stoi(hours)) + stoi(minute);
            minutes[i] = total_minutes;
        }  
        sort(minutes.begin(), minutes.end());
        int min_diff = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            if (minutes[i+1] - minutes[i] < min_diff)
            {
                min_diff = minutes[i+1] - minutes[i];
            }
        } 
        if (min_diff > 720)
        {
            min_diff = 1440-min_diff;
        }

        min_diff = min(min_diff, 1440 - minutes.back() + minutes.front());

        return min_diff;
    }
};