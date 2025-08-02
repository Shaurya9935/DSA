// This the solution for the question 2 of the leetcode biweekly contest 162. 

// First i came up with a brute force solution in which i have to use 2 loops and the time complexity will o(n^2) 

// Here the time complexity would be o(n logn)


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int maxValidLength = 0;

    int left = 0;
    for (int right = 0; right < n; ++right) {
        while (nums[right] > (long long)nums[left] * k) {
            left++;
        }
        maxValidLength = max(maxValidLength, right - left + 1);
    }

    return n - maxValidLength;
}
};