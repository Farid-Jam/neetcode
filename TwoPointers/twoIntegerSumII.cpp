// Given an array of integers numbers that is sorted in non-decreasing order.

// Return the indices (1-indexed) of two numbers, [index1, index2], such that they add up to a given 
// target number target and index1 < index2. Note that index1 and index2 cannot be equal, therefore you may 
// not use the same element twice.

// There will always be exactly one valid solution.

// Your solution must use O(1) additional space.

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            vector<int> ans;
            int L = 0;
            int R = numbers.size() - 1;
            while (L < R){
                if (numbers[L] + numbers[R] < target){
                    L++;
                } else if (numbers[L] + numbers[R] > target){
                    R--;
                }
                else {
                    ans.push_back(L+1);
                    ans.push_back(R+1);
                    return ans;
                }
            }
            return ans;
        }
    };
    