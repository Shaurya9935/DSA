// This is Problem 11 of leetcode, in which i have to find the container which can hold the most water. 

// I have given an array and basically i have to find the maximum area 

// First i came up with a brute force solution of time complexity o(n^2) in which I have to use 2 loops and iterate through whole array then I used this 2 pointer approach 

// This is the Solution i came up with :

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxArea =0;
        while(left < right){
            int h = min(height[left], height[right]);
            int w = right - left;
            maxArea = max(maxArea, h*w);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};