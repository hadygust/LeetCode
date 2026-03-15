class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 0;

        for(int n : piles){
            if(n > r) r = n;
        }

        int curr = ceil((double)(r-l)/2);
        int ans = r;

        while (l <= r){
            long long int time = 0;
            for(int n : piles){
                time += ceil((double)n/curr);
            }
            if(time == h) {
                ans = curr;
                r = curr - 1;
                curr = (r - l) / 2 + l;
            }
            else if(time > h){
                l = curr + 1;
                curr = (r - l) / 2 + l;
            } else {
                r = curr - 1;
                curr = (r - l) / 2 + l;
            }
        }

        return curr;
    }
};