//This is problem Number 674 in leetcode, in which i have to return maximum longest continuous subaaray. 
//Following is the solution I came up with :

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt=1, ans=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                cnt++;
            }
            else{
                ans = max(cnt,ans);
                cnt=1;
            }
        }
        ans = max(cnt,ans);
        return ans;
    }
};