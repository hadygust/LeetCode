class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m, mm;

        for (int n : nums){
            m[n]++;
        }

        set<int> s;
        for(auto n : m){
            s.insert(n.second);
        }

        int i = 0;
        vector<int> res;
        for (auto it = s.rbegin(); it != s.rend(); it++){
            for(auto n : m){
                if(n.second == *it){
                    res.push_back(n.first);
                    i++;
                }
                if(i == k) return res;
            }
        }

        return res;
    }
};