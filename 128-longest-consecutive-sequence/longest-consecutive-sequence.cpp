class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if(nums.size() < 2) return nums.size();

        int curr = 0;
        int tail = curr;

        int res = 1;

        while(curr < nums.size()){
            tail = curr+1;

            int sub = 0;

            while(tail < nums.size() && (nums[tail] - nums[tail-1] == 1 || nums[tail] - nums[tail-1] == 0)){
                if(nums[tail] - nums[tail-1] == 0){
                    sub++;
                }
                tail++;
            }

            res = max(res, tail-curr-sub);

            curr = tail;
        }

        return res;
    }   
};