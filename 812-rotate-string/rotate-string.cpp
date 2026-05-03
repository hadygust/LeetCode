class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length()) return false;

        int offset = 0;
        while (offset < s.length()){
            if(s[offset] == goal[0]){
                int i = offset, j = 0;
                while(s[i] == goal[j] && j < goal.length()){
                    i = (i+1) % s.length();
                    j++;
                    cout << i << " " << j << " " << s[i] << " " << goal[j] << endl;
                }
                cout << endl;
                if (j == goal.length()) return true;
            }
            offset++;
        }

        return false;
    }
};