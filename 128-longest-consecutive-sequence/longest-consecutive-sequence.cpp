class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)return 0;
        if(nums.size() == 1) return 1;

        set<int> s(nums.begin(), nums.end());

        auto last = s.begin();
        int count = 1;
        int res = 0;

        for(auto n = ++s.begin(); n != s.end(); n++){
            if(*n-*last > 1) {
                res = (res < count) ? count : res;
                count = 1;
            } else {
                count += 1;
            }
            last = n;
        }

        res = (res < count) ? count : res;

        return res;
        
    }
};