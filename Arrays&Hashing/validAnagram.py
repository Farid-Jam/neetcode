# Given two strings s and t, return true if the two strings are 
# anagrams of each other, otherwise return false.

# An anagram is a string that contains the exact same characters as another string,
# but the order of the characters can be different.

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        hashmapS = {}
        hashmapT = {}
        for i in range (0, len(s)):
            hashmapS[s[i]] = 1 + hashmapS.get(s[i], 0)
            hashmapT[t[i]] = 1 + hashmapT.get(t[i], 0)
        return hashmapS == hashmapT