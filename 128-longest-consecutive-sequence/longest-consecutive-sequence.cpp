class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)return 0;
        if(nums.size() == 1) return 1;

        set<int> s;

        for(int n : nums) {
            s.insert(n);
        }

        auto last = s.begin();
        int count = 1;
        int res = 0;

        for(auto n = s.begin(); n != s.end(); n++){
            if(n == s.begin()){
                continue;
            }

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