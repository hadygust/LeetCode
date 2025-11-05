class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        // for(int n : nums){
        //     cout << n << " ";
        // }

        set<vector<int>> sres;

        for (int i = 0; i < nums.size(); i++){
            
            int l = i+1, r = nums.size()-1;

            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    sres.insert({nums[i], nums[l], nums[r]});
                    l++; r--;
                    // break;
                }
                else if(nums[i] + nums[l] + nums[r] < 0){
                    l++;
                } else {
                    r--;
                }
            }
// -2 0 0 1 2
// -1 -1 0 1 2 2 
        }
        vector<vector<int>> res(sres.begin(), sres.end());
        return res;
        
    }
};