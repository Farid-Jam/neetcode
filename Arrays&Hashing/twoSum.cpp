// Given an array of integers nums and an integer target, return the indices i and j 
// such that nums[i] + nums[j] == target and i != j.

// You may assume that every input has exactly one pair of indices i and j that 
// satisfy the condition.

// Return the answer with the smaller index first.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); i++){
            int diff = target-nums[i];
            if (index.count(diff)){
                return {index[diff], i};
            }
            index.insert({nums[i], i});
        }
    }
};
    
    