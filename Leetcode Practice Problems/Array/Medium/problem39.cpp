// This is problem number 39 from the leetcode, i first tried to understand it then thought of basic methods to solve array questions that are sliding window, 2 pointer, hashing but none of them would work, then i thought of another approach a brute force , its like i add 2 +2+ 2+ 2 when sum exceed the target then remove one 2 and add the next element which it 3 and when it match give it in a list ans and then again add 3 and when sum exceed remove the previous 2 and goes on like this but the problem is lets say target is 8 then i will miss the combination 6 and 2.

// Then i came up with this solution :

#include<bits/stdc++.h>
using namespace std;

class Solution {

    void backtrack(vector<int>& candidates, int target, int start, vector<int>& path, vector<vector<int>>& res) {
    if (target == 0) {
        res.push_back(path);
        return;
    }
    if (target < 0) return;

    for (int i = start; i < candidates.size(); i++) {
        path.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], i, path, res);  
        path.pop_back();
    }
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
    vector<int> path;
    backtrack(candidates, target, 0, path, res);
    return res;
    }
};