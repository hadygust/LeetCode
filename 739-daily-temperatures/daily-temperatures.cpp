class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int, int>> s;

        vector<int> res(t.size());

        for(int i = 0; i < t.size(); i++) {
            int x = t[i];

            while(!s.empty() && s.top().first < x){
                res[s.top().second] = i - s.top().second;
                s.pop();
            }

            s.push({x, i});
        }

        return res;
    }
};