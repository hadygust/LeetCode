class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int, int> m;
        vector<int> ns;

        while(n > 0){
            ns.push_back(n%10);
            n /= 10;
        }

        for(auto i : ns){
            m[i]++;
        }

        int res = 0;

        for(auto i = m.begin(); i != m.end(); i++){
            res += i->first * i->second;
        }

        return res;
    }
};