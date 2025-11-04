class Solution {
public:
    vector<int> twoSum(vector<int>& ns, int target) {
        int l = 0, r = ns.size()-1;
        while(l < r){
            if(ns[l] + ns[r] != target){
                if(ns[l] + ns[r] > target){
                    r--;
                } else {
                    l++;
                }
            } else {
                return {l+1, r+1};
            }
        }
        return {0,0};
    }
};