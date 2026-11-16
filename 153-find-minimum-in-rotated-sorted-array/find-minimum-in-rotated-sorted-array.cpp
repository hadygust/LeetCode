class Solution {
public:
    int findMin(vector<int>& nums) {

        if(nums.size() == 0 || nums[0] < nums[nums.size()-1]){
            return nums[0];
        }

        int l = 0;
        int r = nums.size()-1;


        while (l < r){
            int mid = (l + r)/2;
            // cout << l << ' ' << mid << ' ' << r << ' ' << endl;
            if(nums[mid] < nums[r]){
                r = mid;
            } else {
                l = mid + 1;
            }
        }


        return nums[l];
    }
};