// This is proble 34 from leetcode, i already saw this problem in Striver DSA sheet and can able to solve it with the Binary Search

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int firstOccurence(vector<int>nums, int n, int target){
 int low = 0, high = n-1, first = -1;
        while(low<=high){
           int mid = (low + high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) low =mid + 1;
            else high = mid - 1;
        }
        return first;
}
int lastOccurence(vector<int>nums, int n, int target){
    int low =0, high = n-1, last = -1;
    while(low<=high){
       int mid = (low + high)/2;
        if(nums[mid] == target){
            last = mid;
            low = mid+1;
        }
        else if(nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
       int first = firstOccurence(nums, n, target);
       if( first == -1) return {-1, -1};
       int last = lastOccurence(nums, n, target);
       return{first, last};
    }
};