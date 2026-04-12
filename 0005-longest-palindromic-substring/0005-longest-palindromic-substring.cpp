#include <string>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        int start = 0, maxLen = 0;
        for (int i = 0; i < s.size(); ++i)
            for (int j = 0; j < 2; ++j) {
                int l = i, r = i + j;
                while (l >= 0 && r < s.size() && s[l] == s[r]) --l, ++r;
                if (r - l - 1 > maxLen)
                    start = l + 1, maxLen = r - l - 1;
            }
        return s.substr(start, maxLen);
    }
};