# Given an integer array nums, return true if any value appears 
# more than once in the array, otherwise return false.

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        myset = set()
        for num in nums:
            if num in myset:
                return True
            myset.add(num)
        return False