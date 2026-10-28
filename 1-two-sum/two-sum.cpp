class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());

        int a, b;
        while (l < r) {
            if(nums[l] + nums[r] == target){
                a = nums[l]; b = nums[r];
                break;
            } else if (nums[l] + nums[r] > target){
                r--;
            } else if (nums[l] + nums[r] < target){
                l++;
            }
        }

        bool ia = false, ib = false;

        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == a && !ia){
                ia = true;
                a = i;
            } else if (temp[i] == b && !ib){
                ib = true;
                b = i;
            }
            cout << temp[i] << ' ' << a << ' ' << b << endl;
        }

        return {a, b};
    }
};