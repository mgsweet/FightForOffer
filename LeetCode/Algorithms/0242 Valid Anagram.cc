class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    array<int, 257> count;
    count.fill(0);
    for (int i = 0; i < s.size(); ++i) {
      ++count[s[i]]; 
    }
    for (int i = 0; i < t.size(); ++i) {
      --count[t[i]];
      if (count[t[i]] < 0) return false;
    }
    return true;
  }
};