class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        set<pair<int,int>, greater<pair<int,int>>> p;

        for(auto i : nums){
            m[i]++;
        }

        for(auto i = m.begin(); i != m.end(); i++){
            p.insert({i->second, i->first});
        }

        vector<int> res;
        int count = 0;

        for(auto i : p){
            if(count >= k) break;
            res.push_back(i.second);
            count++;
        }

        return res;
    }
};