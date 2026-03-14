class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, curr = (r-l)/2;
        while(l <= r){
            cout << curr << endl;
            if(nums[curr] == target) return curr;
            else if(nums[curr] < target){
                l = curr+1;
                curr = (r-l)/2+l;
            } else {
                r = curr-1;
                curr = (r-l)/2+l;
            }
        }

        return -1;
    }
};