class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0 || strs.size() == 1) return {strs};

        map<multiset<char>, vector<string>> m;

        for(string s : strs){
            multiset<char> set;

            for(auto c : s){
                set.insert(c);
            }

            m[set].push_back(s);
            cout << m[set][m[set].size()-1] << endl;
        }
        
        vector<vector<string>> res;

        for(auto &i : m){
            res.push_back(i.second);
        }

        

        return res;
    }
};