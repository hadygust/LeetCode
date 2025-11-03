class Solution {
public:
    int countPoints(string rings) {

        map<int, set<char>> m;

        for(int i = 0; i < rings.length(); i += 2){
            char c = rings[i];
            int n = rings[i+1];

            m[n].insert(c);
        }

        int res = 0;
        for(auto s : m){
            if(s.second.size() == 3) res++;
        }

        return res;
        
    }
};