class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        multiset<char> ms, mt;

        for(int i = 0; i < s.length(); i++){
            ms.insert(s[i]);
            mt.insert(t[i]);
        }

        return ms == mt;
    }
};