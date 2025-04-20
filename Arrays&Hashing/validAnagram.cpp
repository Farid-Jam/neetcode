// Given two strings s and t, return true if the two strings are 
// anagrams of each other, otherwise return false.

// An anagram is a string that contains the exact same characters as another string,
// but the order of the characters can be different.

class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) {
                return false;
            }
            
            unordered_map<char, int> counterS;
            unordered_map<char, int> counterT;
            for (int i = 0; i < s.length(); i++){
                counterS[s[i]]++;
                counterT[s[i]]++;
            }
            return counterT == counterS;
        }
    };
    