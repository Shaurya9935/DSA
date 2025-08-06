// This is problem 904 from the daily question of leetcode, 
// I tried to solve this problem with the help of sliding window + Map which makes
// Time Complexity -> o(n)
// Space Complexity -> o(1) - Atmost 3 keys in the map (only 2 ideally)


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> countMap;
    int left = 0, maxFruits = 0;

    for (int right = 0; right < fruits.size(); ++right) {
        countMap[fruits[right]]++;

        while (countMap.size() > 2) {
            countMap[fruits[left]]--;
            if (countMap[fruits[left]] == 0) {
                countMap.erase(fruits[left]);
            }
            left++;  // shrink window from left
        }

        maxFruits = max(maxFruits, right - left + 1);
    }

    return maxFruits;
}
};