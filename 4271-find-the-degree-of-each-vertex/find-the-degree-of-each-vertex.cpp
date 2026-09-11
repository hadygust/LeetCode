class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        vector<int> res;
        for (int i = 0; i < m.size(); i++){
            res.push_back(accumulate(m[i].begin(), m[i].end(), 0));
        }

        return res;
    }
};