class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // cout << ceil((double)3/2) << endl;
        int l = 1, r = 0;

        for(int n : piles){
            if(n > r) r = n;
        }

        cout << "r " << r << endl;

        int curr = ceil((double)(r-l)/2);

        while (l <= r){
            long long int time = 0;
            for(int n : piles){
                time += ceil((double)n/curr);
            }
            if(time == h) break;
            else if(time > h){
                l = curr + 1;
                curr = (r - l) / 2 + l;
            } else {
                r = curr - 1;
                curr = (r - l) / 2 + l;
            }
        }

        cout << curr << endl;

        while (curr > 1){
            curr--;
            int time = 0;
            for(int n : piles){
                time += ceil((double)n/curr);
            }
            if(time != h || curr == 0){
                curr++;
                break;
            } 
        }

        return curr;
    }
};