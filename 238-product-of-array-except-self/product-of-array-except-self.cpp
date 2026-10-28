class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1;
        int zero = 0;
        for(auto x : nums){
            if (x != 0) sum *= x;
            else zero++;
        }

        for(int i = 0; i < nums.size(); i++){
            if (zero == 0) nums[i] = sum/nums[i];
            else {
                if (zero == 1){
                    nums[i] = (nums[i] == 0) ? sum : 0;
                } else {
                    nums[i] = 0;
                }
            }
        }
        return nums;
    }
};