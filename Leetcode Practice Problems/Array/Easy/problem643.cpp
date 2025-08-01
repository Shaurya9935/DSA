// This is Problem number 643 in leetcode, I have to return subarray with maximum average of window 'k' which is given 

// I tried to solve this problem with the help of sliding window which takes time complexity of O(n). 
// By reading the Question i understood it will solved by sliding window and not took much time to code. 

// Below is the Solution:

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum =0;

        if(nums.size() == 1){
            return nums[0];
        }
        else if(nums.size() == 0){
            return -1;
        }

        for(int i=0; i<k; i++){
            currentSum +=nums[i];
        }
        
        double maxSum = currentSum;

        for(int i=k; i<nums.size(); i++){
            currentSum += nums[i];
            currentSum -= nums[i-k];
            maxSum = max(currentSum, maxSum);
        }

        return maxSum/k;
    }
};