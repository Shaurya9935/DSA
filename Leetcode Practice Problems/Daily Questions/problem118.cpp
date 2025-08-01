// This is the problem from Daily practice problem.
// I've attempted this problem before so didn't took much time to solve this proble 
// Here is the Solution i came up with :

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> generateRow(int row){
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col=1;col<row;col++){
             ans= ans*(row-col);
             ans = ans/(col);
             ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};