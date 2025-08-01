//This is problem number 645. In which I have to return a duplicate number and a missing number that is in the array.
//First i tried with the brute approach but there is logical issue in this code as there is not always ans.push_back(nums[i]+1) which i misunderstood.
//But Later get the correct solution with the help of hashing, I can also use XOR but i haven't studied it yet so don't know how to code it correctly. 

// Wrong Solution :

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
                ans.push_back(nums[i] + 1);
                return ans;
            }
        }
        return ans;
    }
};

// Correct Solution :

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         int n = nums.size();
        vector<int>hash(n+1, 0);

        for (int i=0; i<n; i++) {
            hash[nums[i]]++;
        }

        int duplicate = -1, missing = -1;
        for (int i = 1; i <= n; i++) {
            if (hash[i] == 2) duplicate = i;
            else if (hash[i] == 0) missing = i;
        }

        return {duplicate, missing};
    }
};