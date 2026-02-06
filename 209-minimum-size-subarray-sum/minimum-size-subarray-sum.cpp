class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> sub;

        int l = 0, 
        r = 0, 
        sum = nums[0], 
        min = INT_MAX;

        while(l < nums.size()) {

            if(sum < target){
                if(++r == nums.size()) break;
                sum += nums[r];
            } else if (sum >= target){
                min = (min > r-l+1) ? r-l+1 : min;
                sum -= nums[l];
                l++;
            }

            cout << sum << endl;

        }

        return (min == INT_MAX) ? 0 : min;

    }
};