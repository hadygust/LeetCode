class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0, r = nums.size()-1;

        while (true){
            int mid = (r+l)/2;
            
            if(nums[mid] == target){
                return mid;
            } else if (nums[mid] < target){
                if(l == mid && mid == r) {
                    break;
                } else if (l == mid){
                    l = r;
                    continue;
                }
                l = mid;
            } else {
                if(r == mid) break;
                r = mid;
            }
        }

        return -1;
    }
};