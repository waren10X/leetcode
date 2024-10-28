#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool areAnagrams(const string& s1, const string& s2)
    {
        if (s1.size() != s2.size()) return false;
        
        int charCount[26] = {0};
        for (char c : s1) charCount[c - 'a']++;
        for (char c : s2)
        {
            charCount[c - 'a']--;
            if (charCount[c - 'a'] < 0) return false;
        }
        return true;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> result;
        vector<bool> grouped(strs.size(), false); 

        for (int i = 0; i < strs.size(); ++i)
        {
            if (grouped[i]) continue; 
            
            vector<string> group = {strs[i]};
            grouped[i] = true;
            
            for (int j = i + 1; j < strs.size(); ++j)
            {
                if (!grouped[j] && areAnagrams(strs[i], strs[j]))
                {
                    group.push_back(strs[j]);
                    grouped[j] = true;
                }
            }
            
            result.push_back(group);
        }
        
        return result;
    }
};