class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<multiset<char>, vector<string>> m;
        for (int i = 0; i < strs.size(); i++){
            multiset<char> temp;
            for(auto c : strs[i]){
                temp.insert(c);
            }

            m[temp].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for (auto i = m.begin(); i != m.end(); i++){
            res.push_back(i->second);
        }

        return res;
    }
};