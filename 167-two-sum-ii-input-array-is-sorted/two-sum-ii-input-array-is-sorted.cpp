class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int l = 0, r = n.size()-1;

        while (l < r){
            if(n[l] + n[r] == target){
                return {l+1, r+1};
            }
            else if (n[l] + n[r] < target){
                l++;
            }
            else if (n[l] + n[r] > target){
                r--;;
            }
        }

        return {};
    }
};