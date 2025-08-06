// This is problem number 704 from leetcode, 
// I already saw this problem in Striver DSA sheet and i am solving it from there i learned it approx 3-4 weeks ago but trying it out now all by myself to check weather i can understood the logic or i am just memorising it... 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0, high = n-1, mid;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]  == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
};