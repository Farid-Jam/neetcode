/* You are given an array of distinct integers nums and a target integer target. Your task is to return a list 
of all unique combinations of nums where the chosen numbers sum to target.

The same number may be chosen from nums an unlimited number of times. Two combinations are the same if the frequency 
of each of the chosen numbers is the same, otherwise they are different.

You may return the combinations in any order and the order of the numbers in each combination can be in any order. */

class Solution {
private:
    void dfs(vector<int>& nums, int i, int target, vector<vector<int>>& res, vector<int> combination, int currSum){
        if (currSum > target) return;
        if (currSum == target){
            res.push_back(combination);
        }
        for (int j = i; j < nums.size(); j++){
            combination.push_back(nums[j]);
            dfs(nums, j, target, res, combination, currSum + nums[j]);
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> combination;
        dfs(nums, 0, target, res, combination, 0);
        return res;
    }
};
