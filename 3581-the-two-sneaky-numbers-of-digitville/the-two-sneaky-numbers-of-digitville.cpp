class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        unordered_map<int, int> m;

        for(int n : nums){
            m[n]++;
        }

        vector<int> res;

        for(auto n : m){
            if(n.second == 2) res.push_back(n.first);
        }

        return res;
        
    }
};