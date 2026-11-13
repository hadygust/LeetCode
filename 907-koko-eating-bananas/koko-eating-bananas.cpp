class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());

        int l = 1;
        int r = piles[piles.size()-1];
        int res = 0;

        while(l <= r){
            int mid = (l+r)/2;
            long long n = 0;

            for(auto x : piles){
                n += (long long)ceil((double)x/mid);
            } 
            // cout << mid << ' ' << l << ' ' << r << ' ' << n << endl;

            if(n <= h){
                res = mid;
                r = mid - 1;
            } else if (n > h){
                l = mid + 1;
            }
        }

        return res;
    }
};