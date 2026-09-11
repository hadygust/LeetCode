class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        map<int, int> m;

        for (auto n : digits){
            m[n]++;
        }

        int res = 0;
        for (int i = 100; i < 1000; i+=2){
            if (check(i, m)) res++;
        }

        return res;
    }

    bool check (int n, map<int, int> m){
        int a = n % 10;
        int b = (n % 100)/10;
        int c = n/100;

        if (--m[a] < 0) return false;
        if (--m[b] < 0) return false;
        if (--m[c] < 0) return false;

        return true;
    }
};