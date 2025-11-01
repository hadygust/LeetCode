class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int n = 0;
        int ocount = 0;
        for(int x : nums){
            if(x != 0) {
                if(n == 0) n++;
                n *= x;
            }
            else {
                ocount++;
            }
        }

        vector<int> res;

        for(int x : nums){
            if(ocount > 1){
                res.push_back(0);
            } else if(x != 0){
                if(ocount > 0) res.push_back(0);
                else res.push_back(n/x);
            } else {
                res.push_back(n);
            }
        }

        return res;
    }
};