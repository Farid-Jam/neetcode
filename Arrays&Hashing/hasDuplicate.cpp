#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Your original class
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

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 1}; // Change this to test other cases

    bool result = solution.hasDuplicate(nums);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
