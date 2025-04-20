// Given an integer array nums, return true if any value appears 
// more than once in the array, otherwise return false.

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int num : nums) {
            if (set.count(num)) {
                return true;
            } else {
                set.insert(num);
            }
        }
        return false;
    }
};