class Solution {
public:
    string longestPalindrome(string s) {

        int res = 1;
        int start = 0, end = 0;

        for (int i = 0; i < s.length()-1; i++){
            int l = i-1, r = i+1;

            while(isPalindrome(s, l, r)){
                if(res < r-l+1){
                    start = l;
                    end = r;
                    res = r-l+1;
                    cout << s[i] << " " << l << " " << r << " " << res << endl;
                }
                l--; 
                r++;
            }
        }

        for (int i = 0; i < s.length()-1; i++){
            int l = i, r = i+1;

            while(isPalindrome(s, l, r)){
                if(res < r-l+1){
                    start = l;
                    end = r;
                    res = r-l+1;
                    cout << s[i] << " " << l << " " << r << " " <<  res << endl;
                }
                l--; 
                r++;
            }
        }

        return s.substr(start, end-start+1);
    }

    bool isPalindrome(string s, int l, int r){
        if(l < 0 || r >= s.length()){
            return false;
        }
        while (l < r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }

        return true;
    }
};