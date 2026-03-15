class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        int res = 1;

        int l = 0, r = 0;

        int count = 0;
        map<char,int> m;
        while(r < s.length()){
            if(m.find(s[r]) != m.end()){
                res = max(res, count);
                count--;
                m.erase(s[l]);

                while(s[l] != s[r]){
                    l++;
                    count--;
                    m.erase(s[l]);
                }
                l++;
            } else {
                cout << r << s[r] << endl;
                count++;
                m[s[r]]++;
                r++;
            }
        }

        res = max(res, count);
        return res;
    }
};