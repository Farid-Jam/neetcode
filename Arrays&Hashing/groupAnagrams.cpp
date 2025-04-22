// Given an array of strings strs, group all anagrams together into sublists. 
// You may return the output in any order.

// An anagram is a string that contains the exact same characters as another string, but the order of the 
// characters can be different.

class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> map;
            for (string s : strs){
                vector<int> count(26, 0);
                for (char c : s){
                    count[c - 'a']++;
                }
                string key = to_string(count[0]);
                for (int i = 1; i < 26; i++){
                    key += ',' + to_string(count[i]);
                }
                map[key].push_back(s);
            }
            vector<vector<string>> result;
            for (auto pair : map){
                result.push_back(pair.second);
            }
            return result;
        }
    };
    