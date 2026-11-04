class Solution {
public:
    int trap(vector<int>& h) {
        int res = 0;

        int lmax = h[0];
        int rmax = h[h.size()-1];

        int l = 1, r = h.size()-2;

        while (l <= r){
            // cout << lmax << " " << h[l] << " " << h[r] << " " << rmax << "  " << res << endl;
            if(lmax < rmax){
                if(lmax <= h[l]){
                    lmax = h[l];
                } else {
                    res += lmax - h[l];
                }
                l++;
            } else {
                if(rmax <= h[r]){
                    rmax = h[r];
                } else {
                    res += rmax - h[r];
                }
                r--;
            }
        }

        return res;
    }
};