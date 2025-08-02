// This the solution for the question 1 of the leetcode biweekly contest 162. 

// I used this solution for the first question as this question contraints are not that big that i have to use a optimal approach.

// This approach use time complexity o(n x m)

// There is also a upgraded version of this question too in which constraints are big and i have to think of a optimal approach but i can't think of it in time. 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

    int minTime = INT_MAX;

    int n = landStartTime.size();
    int m = waterStartTime.size();

    
    for (int i = 0; i < n; i++) {
        int landStart = landStartTime[i];
        int landDur = landDuration[i];
        for (int j = 0; j < m; j++) {
            int waterStart = waterStartTime[j];
            int waterDur = waterDuration[j];

            int landEnd = landStart + landDur;
            int waterStartAfterLand = max(landEnd, waterStart);
            int finishTime = waterStartAfterLand + waterDur;
            minTime = min(minTime, finishTime);
        }
    }

    for (int j = 0; j < m; j++) {
        int waterStart = waterStartTime[j];
        int waterDur = waterDuration[j];
        for (int i = 0; i < n; i++) {
            int landStart = landStartTime[i];
            int landDur = landDuration[i];

            int waterEnd = waterStart + waterDur;
            int landStartAfterWater = max(waterEnd, landStart);
            int finishTime = landStartAfterWater + landDur;
            minTime = min(minTime, finishTime);
        }
    }

    return minTime;
}
};