class Solution {
public:
    int maxDistinct(string s) {
        set<char> m;

        for (int i = 0; i < s.length(); i++){
            m.insert(s[i]);
        }

        return m.size();
    }
};