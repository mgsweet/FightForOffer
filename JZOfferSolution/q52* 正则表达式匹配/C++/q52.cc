class Solution {
public:
    bool match(char* str, char* pattern)
    {
        if (str == nullptr || pattern == nullptr)
            return false;
        
        if (*str == '\0' && *pattern == '\0')
            return true;
        if (*str != '\0' && *pattern == '\0')
            return false;
        
        if (*(pattern + 1) == '*') {
            if ((*pattern == '.' && *str != '\0') || *pattern == *str) {
                return match(str + 1, pattern) || match(str, pattern + 2);
            } else {
                return match(str, pattern + 2);
            }
        } else {
            if ((*pattern == '.' && *str != '\0') || *pattern == *str) {
                return match(str + 1, pattern + 1);
            } else {
                return false;
            }
        }
    }
};
