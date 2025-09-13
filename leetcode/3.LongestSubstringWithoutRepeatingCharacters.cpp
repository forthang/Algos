// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <string>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int cnt[128]{};
        int ans = 0, n = s.size();
        for (int l = 0, r = 0; r < n; ++r) {
            ++cnt[s[r]];
            while (cnt[s[r]] > 1) {
                --cnt[s[l++]];
            }
            ans = std::max(ans, r - l + 1);
        }
        return ans;
    }
};